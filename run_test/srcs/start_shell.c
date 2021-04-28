<<<<<<< HEAD
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   start_shell.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spark <spark@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 16:18:53 by spark             #+#    #+#             */
/*   Updated: 2021/04/20 15:21:03 by spark            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

=======
>>>>>>> c03ce33 (delete header)
#include "minishell.h"

void	start_write(void)
{
	printf("▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓\n");
	printf("▓▓░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░▓▓\n");
	printf("▓▓░░░░░░░░░░░░░░░░░░░░░▒▒▒▒░░░▒▒▒▒░░░░░░░░░░░░░░░░░░░░▓▓\n");
	printf("▓▓░░░░░░░░░░░░░░░░░░░░▒▒▒▒▒▒░▒▒▒▒▒▒░░░░░░░░░░░░░░░░░░░▓▓\n");
	printf("▓▓░░░░░░░░░░░░░░░░░░░░▒▒▒▒▒▒▒▒▒▒▒▒▒░░░░░░░░░░░░░░░░░░░▓▓\n");
	printf("▓▓░░░░░░░░░░░░░░░░░░░░░▒▒▒▒▒▒▒▒▒▒▒░░░░░░░░░░░░░░░░░░░░▓▓\n");
	printf("▓▓░░░░░░░░░░░░░░░░░░░░░░▒▒▒▒▒▒▒▒▒░░░░░░░░░░░░░░░░░░░░░▓▓\n");
	printf("▓▓░░░░░░░░░░░░░░░░░░░░░░░░▒▒▒▒▒░░░░░░░░░░░░░░░░░░░░░░░▓▓\n");
	printf("▓▓░░░░░░░░░░░░░░░░░░░░░░░░░░▒░░░░░░░░░░░░░░░░░░░░░░░░░▓▓\n");
	printf("▓▓░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░▓▓\n");
	printf("▓▓░░░░░░░░░░░░░░░░░░░░░░░░░░░░▒▒▒░▒▒▒░░░░░░░░░░░░░░░░░▓▓\n");
	printf("▓▓░░░░░░░░░░░░░░░░░░░░░░░░░░░▒▒▒▒▒▒▒▒▒░░░░░░░░░░░░░░░░▓▓\n");
	printf("▓▓░░░░░░░░░░░░░░░░░░░░░░░░░░░░▒▒▒▒▒▒▒░░░░░░░░░░░░░░░░░▓▓\n");
	printf("▓▓░░░░░░░░░░░░░░░░░░░░░░░░░░░░░▒▒▒▒▒░░░░░░░░░░░░░░░░░░▓▓\n");
	printf("▓▓░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░▒▒▒░░░░░░░░░░░░░░░░░░░▓▓\n");
	printf("▓▓░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░▒░░░░░░░░░░░░░░░░░░░░▓▓\n");
	printf("▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓\n");
	printf("_______▒__________▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒\n");
	printf("______▒_______________▒▒▒▒▒▒▒▒\n");
	printf("_____▒________________▒▒▒▒▒▒▒▒\n");
	printf("____▒___________▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒\n");
	printf("___▒\n");
	printf("__▒______▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓\n");
	printf("_▒______▓▒▓▒▓▒▓▒▓▒▓▒▓▒▓▒▓▒▓▒▓▒▓▒▓▒▓▒▓▒▓▒▓▒▓\n");
	printf("▒▒▒▒___▓▒▓▒▓▒▓▒▓▒▓▒▓▒▓▒▓▒▓▒▓▒▓▒▓▒▓▒▓▒▓▒▓▒▓\n");
	printf("▒▒▒▒__▓▒▓▒▓▒▓▒▓▒▓▒▓▒▓▒▓▒▓▒▓▒▓▒▓▒▓▒▓▒▓▒▓▒▓\n");
	printf("▒▒▒__▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓\n");
	printf("▒▒\n");

}

char	*read_line(void)
{
	char	*line;

	line = 0;
	get_next_line(0, &line);
	return (line);
}

int		run_cmd(t_nd *coms, char **en, char *av)
{
	t_nd	*anc;
	int		rt;
	int		i;

	i = -1;
	rt = EXIT_SUCCESS;
	anc = coms;
	while (coms)
	{
		if(lexer(coms, coms->args[0]) == EXIT_FAILURE)
			return (EXIT_SUCCESS);
		if (tokenizer(coms->child) == EXIT_FAILURE)
			return (EXIT_SUCCESS);
		if (coms->sible)
			coms = coms->sible;
		else
			break ;
	}
	while (anc && rt == EXIT_SUCCESS)
	{
		token_changer(anc->child, en);
		get_redirect(anc->child, en);
		rt = run(anc->child, en, av);
		if (anc->sible)
			anc = anc->sible;
		else
			break ;
	}
	return (rt);
}

int	line_check(char *line)
{
	int i;

	i = 0;
	while (line[i] && ft_strchr(SEP, line[i]))
		i++;
	if (!line[i])
		return (0);
	return (1);
}

void	delete_char(int size)
{
	char	alt[size * 2];
	int 	i;

	i = -1;
	while (++i < size)
		alt[i] = '\b';
	while (i < size * 2)
		alt[i++] = ' ';
	write(1, alt, size * 2);
	write(1, alt, size);
}

char	*get_ch(t_hist	*nd)
{
	char	c[2];
	char	*tmp;
	struct termios term;
	struct termios back;
	t_hist	*anc;


	c[1] = 0;
	tcgetattr(STDIN_FILENO, &term);
	tcgetattr(STDIN_FILENO, &back);
	term.c_lflag &= ~ICANON;    
	term.c_lflag &= ~ECHO;      
	term.c_cc[VMIN] = 1; 
	term.c_cc[VTIME] = 0;
	tcsetattr(STDIN_FILENO, TCSANOW, &term);
	anc = nd;
	while (read(0, c, 1) > 0)
	{
		if ((int)c[0] == 27)
		{
			read(0, c, 1);
			if ((int)c[0] == 91)
			{
				read(0, c, 1);
				if ((int)c[0] == 65)
				{
					if (nd->prev && nd->content)
						delete_char(ft_strlen(nd->content));
					if (nd->prev)
					{
						write(1, nd->prev->content, ft_strlen(nd->prev->content));
						nd = nd->prev;	
					}
				}
				else if ((int)c[0] == 66)
				{
					if (nd != anc && nd->content)
						delete_char(ft_strlen(nd->content));
					if (nd != anc)
					{
						if (nd->next->content)
							write(1, nd->next->content, ft_strlen(nd->next->content));
						nd = nd->next;	
					}
				}
			}
		}
		else
		{
			write(1, c, 1);
			if (anc != nd)
			{
				free(anc->content);
				anc->content = ft_strdup(nd->content);
				nd = anc;
			}
			if (c[0] == '\n')
				break ;
			if (!nd->content)
				nd->content = ft_strdup(c);
			else
			{
				c[1] = 0;
				tmp = nd->content;
				nd->content = ft_strjoin(tmp, c);
				free(tmp);
			}
		}
	}
	tcsetattr(STDIN_FILENO, TCSANOW, &back);
	return (nd->content);
}

int	start_shell(char **en, char *av)
{
	int		status;
	char	*line;
	t_nd	*coms;
	t_hist	*history;

	status = EXIT_SUCCESS;
	start_write();
	history = 0;
	signal(SIGINT, (void*)signal_ctlc);
	signal(SIGTERM, SIG_IGN);
	signal(SIGQUIT, (void*)signal_ctlslash);

	
	while (status == EXIT_SUCCESS)
	{
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
>>>>>>> b43bfb0 (4/28_히스토리 제작중! 이제 조금만 더 하면 완성...!!)
		history = history_add(history);
		line = get_ch(history);
		
>>>>>>> edb8026 (4/28_히스토리 제작중! 거의 다 된거같은데....)
		if (*line && line_check(line) && synerror_checker(line, ';') >= 0)
>>>>>>> 555c600 (4/27_enter&spaceLine fixed)
		{
			coms = big_cutter(line);
			status = run_cmd(coms->child, en, av);
		}
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
		// coms free
>>>>>>> b43bfb0 (4/28_히스토리 제작중! 이제 조금만 더 하면 완성...!!)
	}
	// history free
	return (0);
}
