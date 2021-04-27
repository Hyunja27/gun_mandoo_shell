#include "minishell.h"

char	*blt_str(int i)
{
	char	*blt_str[BLT_NUM + 1];

	blt_str[0] = "exit";
	blt_str[1] = "env";
	blt_str[2] = "pwd";
	blt_str[3] = "cd";
	blt_str[BLT_NUM] = NULL;
	return (blt_str[i]);
}

int	(*blt_func(int i))(t_nd *cmd, char **en, char *av)
{
	int		(*blt_fuck[BLT_NUM])(t_nd *cmd, char **en, char *av);

	blt_fuck[0] = &cmd_exit;
	blt_fuck[1] = &cmd_env;
	blt_fuck[2] = &cmd_pwd;
	blt_fuck[3] = &cmd_cd;
	return (blt_fuck[i]);
}

int	builtin_run(t_nd *cmd, char **en, char *av, int i)
{
	int 	rt;
	int		cpy_out;
	int		cpy_in;
	pid_t	pid;

	if (cmd->type == TYPE_C_P || (cmd->prev && cmd->prev->type == TYPE_C_P))
	{
		pipe(cmd->pipes);
		if (cmd->re.rdrt_type > 0)
			dup2(cmd->re.rdrt_fd, cmd->pipes[SIDE_IN]);
		if (cmd->re.rdrt_in_type > 0)
			dup2(cmd->re.rdrt_in_fd, cmd->pipes[SIDE_OUT]);
		pid = fork();
		if (pid == 0)
		{
			// if (signal(SIGTERM, (void*)signal_child_ctld))

			pipe_dup(cmd);
			// kill(pid, SIGINT);
			// signal(SIGQUIT, (void*)signal_child_ctlslash);
			rt = (*blt_func(i))(cmd, en, av);
		}
		else if (pid > 0)
		{
			wait(&pid);
			// pipe_close(cmd);
		}
		else
			write(1, "failed to fork", ft_strlen("failed to fork"));
	}
	else
	{
		if (cmd->re.rdrt_type > 0)
		{
			cpy_out = dup(STDOUT);
			dup2(cmd->re.rdrt_fd, STDOUT);
		}
		if (cmd->re.rdrt_in_type > 0)
		{
			cpy_in = dup(STDIN);
			dup2(cmd->re.rdrt_in_fd, STDIN);
		}
		rt = (*blt_func(i))(cmd, en, av);
		if (cmd->re.rdrt_type > 0)
		{
			dup2(cpy_out, STDOUT);
			close(cpy_out);
		}
		if (cmd->re.rdrt_in_type > 0)
		{
			dup2(cpy_out, STDIN);
			close(cpy_in);
		}
	}
	return (rt);
}
