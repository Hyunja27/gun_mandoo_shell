<<<<<<< HEAD
<<<<<<< HEAD
=======
>>>>>>> b466bd3 (05/06_get_ch_nome...left..)
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   start_shell.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spark <spark@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
<<<<<<< HEAD
/*   Created: 2021/04/11 16:18:53 by spark             #+#    #+#             */
/*   Updated: 2021/04/20 15:21:03 by spark            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

=======
>>>>>>> c03ce33 (delete header)
#include "minishell.h"
=======
/*   Created: 2021/05/05 22:34:06 by spark             #+#    #+#             */
/*   Updated: 2021/05/06 16:07:40 by spark            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
>>>>>>> b466bd3 (05/06_get_ch_nome...left..)

#include "minishell.h"

int		line_check(char *line)
{
	int	i;

	i = 0;
	while (line[i] && ft_strchr(SEP, line[i]))
		i++;
	if (!line[i])
		return (0);
	return (1);
}

void	history_connecter(t_hist **history)
{
	if ((*history)->prev)
	{
		*history = (*history)->prev;
		free((*history)->next);
		(*history)->next = 0;
	}
	else
	{
		free(*history);
		*history = 0;
	}
}

void	basic_ready(t_hist **history, char **line)
{
	if (g_ex.pid == 0)
		write(1, "gun_mandoo_shell > ", ft_strlen("gun_mandoo_shell > "));
	*history = history_add(*history);
	*line = get_ch(*history);
	if (!(*line))
		history_connecter(history);
}

int		start_shell(char ***en, char *av)
{
	int		status;
	char	*line;
	t_nd	*coms;
	t_hist	*history;
	int		tmp_exitcode;

	status = EXIT_SUCCESS;
	start_write();
	history = 0;
	signal(SIGINT, (void *)signal_ctlc);
	signal(SIGQUIT, (void *)signal_ctlslash);
	while (status == EXIT_SUCCESS)
	{
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
		
=======

>>>>>>> f3053e4 (함수 정리)
		write(1, "minishell test>!! ", ft_strlen("minishell test>!! "));
=======
		// signal(SIGINT, (void*)signal_ctlc);
=======
>>>>>>> 3994dc8 (4/27_non_canonical_get_ch를 만들어쪼요)
		if (exit_code == 0)
			write(1, "minishell test> ", ft_strlen("minishell test> "));
=======
=======
		printf("\nexit code is %d!\n\n",exit_code);
>>>>>>> d8f4813 (4/29_EXIT_code&builtin_FIXING)
=======
		// printf("\nexit code is %d!\n\n",exit_code);
<<<<<<< HEAD
<<<<<<< HEAD
>>>>>>> df2534f (4/30_EXIT_CODE_Silyu.....)
		if (exit_code == 0 || exit_code == 1)
<<<<<<< HEAD
			write(1, "minishell test>  ", ft_strlen("minishell test>  "));
>>>>>>> 3be0bdf (4/28_정리사항 반영)
		else
			exit_code = 0;
<<<<<<< HEAD
>>>>>>> 926386d (4/27_우리수비니가널가드를 고쳐써요)
		line = read_line();
<<<<<<< HEAD
=======
		write(1, "minishell test> ", ft_strlen("minishell test> "));
		// line = read_line();
>>>>>>> a978848 (4/26 오늘은 정말 너무 힘들다)
		// printf("line : %s\n", line);
		//line = ft_strdup("> test | echo 123");
		if (ft_strlen(line))
=======
=======
		// line = read_line();
<<<<<<< HEAD
		line = get_ch();
<<<<<<< HEAD
>>>>>>> 3994dc8 (4/27_non_canonical_get_ch를 만들어쪼요)
=======

>>>>>>> 3be0bdf (4/28_정리사항 반영)
		//line = ft_strdup("");
<<<<<<< HEAD
		if (synerror_checker(line, ';') >= 0)
>>>>>>> e9b423a (update)
=======
=======
		// history->next = history_init();
		// history->next->prev = history;
		// line = get_ch(history->next);
=======
			write(1, "minishell test> ", ft_strlen("minishell test> "));
		else
			exit_code = 0;
<<<<<<< HEAD
>>>>>>> b43bfb0 (4/28_히스토리 제작중! 이제 조금만 더 하면 완성...!!)
=======
=======
		if (exit_code != 130 && exit_code != 131)
			write(1, "minishell test> ", ft_strlen("minishell test> "));
>>>>>>> 911ac03 (5/02_exit_code&signal_almost_done....?)
=======
		// if ((ex.exit_code != 130 && exit_code != 131))
		g_ex.is_signaled = 0;
		if (g_ex.pid == 0)
			write(1, "minishell test(start)> ", ft_strlen("minishell test(start)> "));

		//ex.is_signaled = 0;
>>>>>>> 35be605 (5/03_signal을 거의 끝내간다!!)

>>>>>>> 7b10f7c (5/01_builtin_export&unset_build)
=======
		if (g_ex.pid == 0)
<<<<<<< HEAD
			write(1, "minishell test> ", ft_strlen("minishell test> "));
>>>>>>> f0fec41 (05/02 signal 처리)
=======
			write(1, "gun_mandoo_shell > ", ft_strlen("gun_mandoo_shell > "));
>>>>>>> 4cc717f (05/05 오늘 저녁은 머먹지?)
		history = history_add(history);
		line = get_ch(history);
<<<<<<< HEAD
		
>>>>>>> edb8026 (4/28_히스토리 제작중! 거의 다 된거같은데....)
		if (*line && line_check(line) && synerror_checker(line, ';') >= 0)
>>>>>>> 555c600 (4/27_enter&spaceLine fixed)
=======
		if (!line)
		{
			if (history->prev)
			{
				history = history->prev;
				free(history->next);
				history->next = 0;
			}
			else
			{
				free(history);
				history = 0;
			}
		}
		// line = ft_strdup("ls");
		if (line && *line && line_check(line) && synerror_checker(line, ';') >= 0)
>>>>>>> d8f4813 (4/29_EXIT_code&builtin_FIXING)
=======
		basic_ready(&history, &line);
		if (line && *line && line_check(line) && \
		synerror_checker(line, ';') >= 0)
>>>>>>> b466bd3 (05/06_get_ch_nome...left..)
		{
			coms = big_cutter(line);
			status = run_cmd(coms->child, en, av);
			free_nd(coms);
		}
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
		// printf("status : %d\n", status);
=======
>>>>>>> a978848 (4/26 오늘은 정말 너무 힘들다)
=======
		// history = history->next;
>>>>>>> edb8026 (4/28_히스토리 제작중! 거의 다 된거같은데....)
=======
=======
		g_ex.pid = 0;
<<<<<<< HEAD
>>>>>>> 35be605 (5/03_signal을 거의 끝내간다!!)
		// coms free
>>>>>>> b43bfb0 (4/28_히스토리 제작중! 이제 조금만 더 하면 완성...!!)
=======
>>>>>>> 25c7956 (5/04_free_logic_making)
	}
	free_hist(history);
	return (0);
}
