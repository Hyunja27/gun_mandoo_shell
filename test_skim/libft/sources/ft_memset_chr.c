/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset_chr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spark <spark@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/18 15:01:42 by spark             #+#    #+#             */
/*   Updated: 2020/10/18 15:38:56 by spark            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memset_chr(char *p, char c, int n)
{
	int		i;

	i = 0;
	while (i < n)
	{
		p[i] = c;
		i++;
	}
	return (p);
}