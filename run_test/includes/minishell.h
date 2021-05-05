<<<<<<< HEAD
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spark <spark@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 19:40:27 by skim              #+#    #+#             */
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD:run_test/minishell.h
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD:main/minishell.h
<<<<<<< HEAD
/*   Updated: 2021/04/11 21:23:12 by skim             ###   ########.fr       */
=======
/*   Updated: 2021/04/11 17:10:43 by spark            ###   ########.fr       */
>>>>>>> 4e0c9e8 (04/11_making_pharse)
=======
/*   Updated: 2021/04/17 21:40:40 by skim             ###   ########.fr       */
>>>>>>> 255f2ae (run 해보자):run_test/minishell.h
=======
/*   Updated: 2021/04/18 15:25:29 by skim             ###   ########.fr       */
>>>>>>> e652963 (run 된다아ㅏ)
=======
/*   Updated: 2021/04/18 16:33:48 by spark            ###   ########.fr       */
>>>>>>> 22da05c (4/18_listmaker&listprinter&ready_run make)
=======
/*   Updated: 2021/04/18 21:38:06 by spark            ###   ########.fr       */
>>>>>>> 172e5fc (run_test update)
=======
/*   Updated: 2021/04/19 14:28:14 by skim             ###   ########.fr       */
>>>>>>> 8f31bb7 (access 수정)
=======
/*   Updated: 2021/04/19 19:06:02 by skim             ###   ########.fr       */
>>>>>>> 848462f (run_test에서 big_token 수정):run_test/includes/minishell.h
=======
/*   Updated: 2021/04/20 14:38:50 by spark            ###   ########.fr       */
>>>>>>> af70d2d (4/20_env_changer_test_made)
=======
/*   Updated: 2021/04/19 22:24:11 by skim             ###   ########.fr       */
>>>>>>> 60ba770 (update)
/*                                                                            */
/* ************************************************************************** */

=======
>>>>>>> c03ce33 (delete header)
#ifndef MINISHELL_H
# define MINISHELL_H

# include "libft.h"
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <limits.h>
# include <errno.h>
# include <string.h>
# include <sys/stat.h>
# include <signal.h>
# include <termios.h>

# define BLT_NUM 7
# define SEP "\t\n\r\a "

# define TYPE_NONE	-1
# define TYPE_C_P 	1

# define RE_TYPE_OUT  	1
# define RE_TYPE_OOUT	2
# define RE_TYPE_IN  	3

#define SIDE_OUT	0
#define SIDE_IN		1

# define STDOUT		1
# define STDIN		0

typedef struct 	s_exit_code
{
	int		exit_code;
	int		is_signaled;
	pid_t	pid;
} t_exit_code;

t_exit_code	g_ex;

typedef struct 	s_hist
{
	char			*content;
	struct s_hist	*next;
	struct s_hist	*prev;
	int				count;
} t_hist;

typedef struct s_red
{
	int		rdrt_type;
	int		rdrt_in_type;
	char	*rdrt_name;
	char	*rdrt_in_name;
	int		rdrt_fd;
	int		rdrt_in_fd;
} t_red;

typedef struct 	s_nd
{
	char			**args;
	struct s_nd		*child;
	struct s_nd		*sible;
	struct s_nd		*prev;
	int				type;
	int				pipes[2];

	t_red			re;
}				t_nd;

int		start_shell(char ***en, char *av);
int		synerror_checker(char *args, char a);
int		synerror_redirect(char *arg);
char	**split_quote(char *str, char *set);
char	**split_redirect(char **b_arg);

<<<<<<< HEAD
<<<<<<< HEAD
t_nd	*make_big_tok(char *str);
<<<<<<< HEAD
=======
char	**split_qoute(char *str, char c);
>>>>>>> 60ba770 (update)
=======
>>>>>>> 6a6eaa6 (04/21_debugger_made_some_logic_fixed)
char	**make_tok(char *str, char *charset);
t_nd	*make_big_tok(char *str);
char	**split_qoute(char *str, char *set);
=======
t_nd	*big_cutter(char *str);
>>>>>>> f3053e4 (함수 정리)

int		lexer(t_nd *new, char *args);
int		tokenizer(t_nd *nd);

int		token_changer(t_nd *nd, char ***en);
int		get_redirect(t_nd *nd, char **en);
int		get_redirect_info(t_nd *nd, int arg_count, char **en);

int		run(t_nd *cmd, char ***en, char *av);
int		pipe_dup(t_nd *cmd);
void	pipe_close(t_nd *cmd);

int		builtin_run(t_nd *cmd, char ***en, char *av, int i);
int		(*blt_func(int i))(t_nd *cmd, char ***en, char *av);
char	*blt_str(int i);

void	find_cmd(t_nd *com, char **en, char *av);
int		execute_ps(char *run_com, t_nd *com, char **en, char *name);

// built_in
int		cmd_exit(t_nd *com, char ***en, char *name);
int		cmd_env(t_nd *com, char ***en, char *av);
int		cmd_cd(t_nd *com, char ***en, char *av);
int		cmd_pwd(t_nd *com, char ***en, char *av);
int		cmd_unset(t_nd *com, char ***en, char *av);
int		cmd_export(t_nd *com, char ***en, char *av);
int		cmd_echo(t_nd *com, char ***en, char *av);
char	*find_env(char *key, char **en);
char	*find_env_val(char *key, char **en);
char	**add_env(char ***en, char *str);
char	**update_env(char ***en, char *str, char *find_en);
char	**delete_env(char ***en, char *find_en);

// util
t_nd	*new_nd(char *name);
t_nd	*child_rewind(t_nd *coms);
void	print_list(t_nd *com);
int		matrix_line_num(char **matrix);

// signal
void	*signal_ctlc(int signo);
void	*signal_ctld(int signo);
void	*signal_ctlslash(int signo);
t_hist	*history_add(t_hist *nd);

void	print_list_2(t_hist *com);

char	*get_ch(t_hist	*nd);
int		is_redirect(char *str);
void	free_nd(t_nd *coms);
void	free_hist(t_hist *hist);

#endif
