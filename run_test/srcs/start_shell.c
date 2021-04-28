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

char	*get_ch()
{
	char	c[2];
	char	*tmp;
	char	*rt;
	struct termios term;
	// tmp	= (char *)malloc(sizeof(char) * 1);
	// tmp[0] = 0;
	c[1] = 0;
	rt = 0;

	tcgetattr(STDIN_FILENO, &term);
	term.c_lflag &= ~ICANON;    
	term.c_lflag &= ~ECHO;      
	term.c_cc[VMIN] = 1; 
	term.c_cc[VTIME] = 0;
	tcsetattr(STDIN_FILENO, TCSANOW, &term);

	while (read(0, c, 1) > 0)
	{
		if (!rt)
			rt = ft_strdup(c);
		else
		{
			tmp = ft_strdup(rt);
			free(rt);
			rt = ft_strjoin(tmp, c);
			free(tmp);
		}
		write(1, c, 1);
		if (c[0] == '\n')
			break ;
	}
	return (rt);
}

int	start_shell(char **en, char *av)
{
	int		status;
	char	*line;
	char	hist[PATH_MAX][PATH_MAX];
	t_nd	*coms;
	// int		i;
	// i = -1;
	// while (++i < PATH_MAX)
	// 	ft_memset(hist[i], 0, PATH_MAX);
	status = EXIT_SUCCESS;
	start_write();
	// i = 0;ㄴ

	signal(SIGINT, (void*)signal_ctlc);
	// signal(SIGTERM, (void*)signal_ctld);
	signal(SIGTERM, SIG_IGN);
	signal(SIGQUIT, (void*)signal_ctlslash);
	while (status == EXIT_SUCCESS)
	{
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
		line = get_ch();
>>>>>>> 3994dc8 (4/27_non_canonical_get_ch를 만들어쪼요)
		//line = ft_strdup("");
<<<<<<< HEAD
		if (synerror_checker(line, ';') >= 0)
>>>>>>> e9b423a (update)
=======
		if (*line && line_check(line) && synerror_checker(line, ';') >= 0)
>>>>>>> 555c600 (4/27_enter&spaceLine fixed)
		{
			coms = big_cutter(line);
			free(line);
			status = run_cmd(coms->child, en, av);
		}
<<<<<<< HEAD
		// printf("status : %d\n", status);
=======
>>>>>>> a978848 (4/26 오늘은 정말 너무 힘들다)
	}
	return (0);
}
