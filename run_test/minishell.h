/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skim <skim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 19:40:27 by skim              #+#    #+#             */
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
/*                                                                            */
/* ************************************************************************** */

#ifndef MINISHELL_H
# define MINISHELL_H

# include <stdio.h>
# include "libft/includes/libft.h"
# include <string.h>
# include <unistd.h>
# include <limits.h>
# include <errno.h>

# define BLT_NUM 4

# define TYPE_NONE	-1
# define TYPE_NONE	-1
# define TYPE_C_P 	1
# define TYPE_P_C 	2
# define TYPE_RE  	3

typedef struct s_red
{
	int		rdrt_yn;
	int		rdrt_fd;
} t_red;

typedef struct 	s_info
{
	struct s_nd		*head;
	struct s_nd		*tail;
}				t_info;

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
char	**make_tok(char *str, char *charset);
int		run(char **run_com, char **en, char *av);

int		cmd_exit(char **run_com, char **en, char *name);
int		cmd_env(char **run_com, char **en, char *av);
int		cmd_cd(char **run_com, char **en, char *av);
int		cmd_pwd(char **run_cum, char **en, char *av);
char	*find_env(char *key, char **en);
char	*find_env_val(char *key, char **en);

#endif
