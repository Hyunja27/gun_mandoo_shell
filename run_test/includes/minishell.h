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
# include <string.h>
# include <unistd.h>
# include <limits.h>
# include <errno.h>
# include <sys/stat.h>

# define BLT_NUM 4
# define SEP " \t\n\r\a\""

# define TYPE_NONE	-1
# define TYPE_C_P 	1

# define RE_TYPE_OUT  	1
# define RE_TYPE_IN  	2

# define SIDE_IN	0
# define SIDE_OUT	1

# define STDOUT		1
# define STDIN		0

typedef struct s_red
{
	int		rdrt_type;
	int		rdrt_fd;
} t_red;

typedef struct 	s_info
{
	struct s_nd		*head;
	struct s_nd		*tail;
} t_info;

typedef struct 	s_nd
{
	char			**args;
	struct s_nd		*child;
	struct s_nd		*sible;
	struct s_nd		*prev;
	int				type;
	int				pipes[2];

	t_info			pos;
	t_red			re;
}				t_nd;

int		start_shell(char **en, char *av);

<<<<<<< HEAD
t_nd	*make_big_tok(char *str);
<<<<<<< HEAD
=======
char	**split_qoute(char *str, char c);
>>>>>>> 60ba770 (update)
=======
>>>>>>> 6a6eaa6 (04/21_debugger_made_some_logic_fixed)
char	**make_tok(char *str, char *charset);
char	**split_qoute(char *str, char *set);
int		lexer(t_nd *new, char *args);

void	ready_run(t_nd *coms);
int		run(t_nd *cmd, char **en, char *av);

int		cmd_exit(t_nd *com, char **en, char *name);
int		cmd_env(t_nd *com, char **en, char *av);
int		cmd_cd(t_nd *com, char **en, char *av);
int		cmd_pwd(t_nd *com, char **en, char *av);
char	*find_env(char *key, char **en);
char	*find_env_val(char *key, char **en);

t_nd	*new_nd(char *name);
void	print_list(t_nd *com);
int		matrix_line_num(char **matrix);

int		make_mini_tok(t_nd *nd, char **en);
t_nd	*make_big_tok(char *str);

int		env_controller(char *args), char **en);
int		env_changer(char *args, int *arg_i, char *cpy_arg, char **en);
t_nd	*child_rewind(t_nd *coms);
int		call_env(t_nd *nd, char **en);

#endif
