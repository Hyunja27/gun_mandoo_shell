/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   env.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spark <spark@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 16:18:40 by spark             #+#    #+#             */
/*   Updated: 2021/04/11 16:20:02 by spark            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "minishell.h"

int		cmd_env(char **run_com, char **en, char *av)
{
	int		i;

	i = -1;
	while (en[++i])
		printf("%s\n", en[i]);
	return (1);
}
