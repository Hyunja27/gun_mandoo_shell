/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test3_run.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spark <spark@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 18:19:42 by skim              #+#    #+#             */
/*   Updated: 2021/04/10 17:50:43 by spark            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test.h"

char	*blt_str(int i)
{
	char	*blt_str[BLT_NUM + 1];

	blt_str[0] = "exit";
	blt_str[1] = "env";
	blt_str[BLT_NUM] = NULL;
	return (blt_str[i]);
}

int		(*blt_func(int i))(char **run_com, char **en, char *av)
{
	int		(*blt_fuck[BLT_NUM])(char **run_com, char **en, char *av);

	blt_fuck[0] = &cmd_exit;
	blt_fuck[1] = &cmd_env;
	return (blt_fuck[i]);
}

int		run(char **run_com, char **en, char *av)
{
	int		i;
	int		rt;

	rt = 1;
	i = -1;
	if (!run_com || !*run_com || !**run_com)
		return (rt);
	while (++i < BLT_NUM)
		if (!(strcmp(run_com[0], blt_str(i))))
			return ((*blt_func(i))(run_com, en, av));
	return (rt);
}
