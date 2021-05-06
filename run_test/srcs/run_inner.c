/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   run_inner.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spark <spark@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/06 16:10:00 by spark             #+#    #+#             */
/*   Updated: 2021/05/06 18:02:05 by spark            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

void	execute_satus(void)
{
	if (WEXITSTATUS(g_ex.exit_code) == 13)
		g_ex.exit_code = 126;
	else if (WIFSIGNALED(g_ex.exit_code))
		g_ex.exit_code = WTERMSIG(g_ex.exit_code) + 128;
	else if (WEXITSTATUS(g_ex.exit_code) >= 255)
		g_ex.exit_code = 1;
	else
		g_ex.exit_code = WEXITSTATUS(g_ex.exit_code);
}

void	excute_fork(char *run_com, t_nd *com, char **en)
{
	if (com->type == TYPE_C_P || (com->prev && com->prev->type == TYPE_C_P))
		pipe_dup(com);
	if (com->type != TYPE_C_P)
	{
		if (com->re.rdrt_type > 0)
			dup2(com->re.rdrt_fd, STDOUT);
		if (com->re.rdrt_in_type > 0)
		{
			if (com->prev && com->prev->type == TYPE_C_P)
				dup2(com->re.rdrt_in_fd, com->pipes[SIDE_OUT]);
			else
				dup2(com->re.rdrt_in_fd, STDIN);
		}
	}
	if (run_com)
	{
		if (execve(run_com, com->args, en) == -1)
		{
			write(2, strerror(errno), ft_strlen(strerror(errno)));
			write(2, "\n", 1);
			exit(errno);
		}
	}
	exit(0);
}

int		execute_ps(char *run_com, t_nd *com, char **en)
{
	if (com->type == TYPE_C_P || (com->prev && com->prev->type == TYPE_C_P))
		pipe(com->pipes);
	if (com->re.rdrt_type > 0 && com->type == TYPE_C_P)
		dup2(com->re.rdrt_fd, com->pipes[SIDE_IN]);
	if (com->re.rdrt_in_type > 0 && com->type == TYPE_C_P)
		dup2(com->re.rdrt_in_fd, com->pipes[SIDE_OUT]);
	g_ex.pid = fork();
	if (g_ex.pid == 0)
		excute_fork(run_com, com, en);
	else if (g_ex.pid > 0)
	{
		waitpid(g_ex.pid, &g_ex.exit_code, WUNTRACED);
		if (com->type == TYPE_C_P || (com->prev && com->prev->type == TYPE_C_P))
			pipe_close(com);
	}
	else
		write(2, "failed to fork", ft_strlen("failed to fork"));
	execute_satus();
	return (EXIT_SUCCESS);
}

int		find_cmd_path(char *bash_path, t_nd *com, char **en, char *av)
{
	struct stat	test;
	char		temp_path[PATH_MAX];

	if (com->args[0])
	{
		ft_memset(temp_path, '\0', PATH_MAX);
		ft_strcat(temp_path, bash_path);
		if (com->args[0][0] != '/')
			ft_strcat(temp_path, "/");
		ft_strcat(temp_path, com->args[0]);
		if (stat(temp_path, &test) != -1)
		{
			execute_ps(temp_path, com, en);
			return (1);
		}
	}
	else
	{
		execute_ps(com->args[0], com, en);
		return (1);
	}
	return (0);
	(void)av;
}

void	find_cmd(t_nd *com, char ***en, char *av)
{
	char		**bash_path;
	char		*tmp;
	int			i;

	i = -1;
	tmp = find_env_val("PATH", en);
	bash_path = split_quote(tmp, ":");
	while (bash_path[++i])
		if (find_cmd_path(bash_path[i], com, *en, av))
			break ;
	if (bash_path[i] == NULL)
	{
		if (com->args[0][0] == '/' || (com->args[0][0] == '.'))
			write(2, "No such file or directory\n", 26);
		else
			write(2, "command not found\n", ft_strlen("command not found\n"));
		g_ex.exit_code = 127;
	}
	i = -1;
	free(tmp);
	while (bash_path[++i])
		free(bash_path[i]);
	free(bash_path);
}
