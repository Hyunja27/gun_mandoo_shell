/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skim <skim@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 19:40:27 by skim              #+#    #+#             */
/*   Updated: 2021/04/11 21:23:12 by skim             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINISHELL_H
# define MINISHELL_H

# include <stdio.h>
# include "libft/includes/libft.h"
# include <string.h>

# define BLT_NUM 2

int		start_shell(char **en, char *av);
char	**make_tok(char *str, char *charset);
int		run(char **run_com, char **en, char *av);

int		cmd_exit(char **run_com, char **en, char *name);
int		cmd_env(char **run_com, char **en, char *av);
char	*find_env(char *key, char **en);

#endif
