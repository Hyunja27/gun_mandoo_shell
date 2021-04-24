#include "minishell.h"

int		count_size(char *str, char *set)
{
	int		count;
	int		i;
	int		qq_f;
	int		q_f;
	int		flag;

	count = 1;
	i = 0;
	qq_f = 1;
	q_f = 1;
	while (ft_strchr(set, str[i]))
		i++;
	while (str[i])
	{
		if (str[i] == '\"')
			qq_f *= -1;
		else if (str[i] == '\'')
			q_f *= -1;
		else if (ft_strchr(set, str[i]) && qq_f > 0 && q_f > 0)
		{
			if (ft_strchr(set, str[i + 1]))
				;
			else
				count++;
		}
		i++;
	}
	return (count);
}

char	*sep(char **str, char *set)
{
	char	*rt;
	int		i;
	int		qq_f;
	int		q_f;

	i = 0;
	qq_f = 1;
	q_f = 1;
	while (ft_strchr(set, (*str)[i]))
		(*str) += ++i;
	while ((*str)[i])
	{
		if ((*str)[i] == '\"')
			qq_f *= -1;
		else if ((*str)[i] == '\'')
			q_f *= -1;
		if (ft_strchr(set, (*str)[i]) && qq_f > 0 && q_f > 0)
		{
			if (ft_strchr(set, (*str)[i + 1]))
				;
			else
				break;
		}
		i++;
	}
	if (!(*str)[i])
	{
		if (ft_strchr(set, (*str)[i - 1]))
			i--;
		rt = ft_strndup(*str, i);
	}
	else
	{
		// if (ft_strchr(SEP, (*str)[i]))
		// 	i++;
		rt = ft_strndup(*str, i);
		(*str) += i + 1;
	}
	return (rt);
}

char	**split_qoute(char *str, char *set)
{
	char	**rt;
	int		size;
	int		i;

	if (!str)
		return (NULL);
	size = count_size(str, set);
	rt = (char **)malloc(sizeof(char *) * (size + 1));
	if (!rt)
		return (NULL);
	i = -1;
	while (++i < size)
		rt[i] = sep(&str, set);
	rt[i] = 0;
	return (rt);
}

t_nd	*make_big_tok(char *str)
{
	char	**tmp;
	int		i;
	t_nd	*mother;
	t_nd	*tmp_nd;
	t_nd	*tmp_nd2;

	i = -1;
	
	tmp = split_qoute(str, ";");

	// while (tmp[++i])
	// 	printf("%d : %s\n", i, tmp[i]);
	// i = -1;

	mother = new_nd(str);
	mother->pos.head = mother;
	mother->pos.tail = mother;
	while (tmp[++i])
	{
		if (i == 0)
		{
			mother->child = new_nd(tmp[i]);
			mother->child->prev = mother;
			tmp_nd = mother->child;
		}
		else
		{
			tmp_nd->sible = new_nd(tmp[i]);
			tmp_nd->sible->prev = tmp_nd;
			tmp_nd = tmp_nd->sible;
		}
	}
	tmp_nd = mother;
	// printf("{ %s }\n", tmp_nd->args[0]);
	// while(tmp_nd->child)
	// {
	// 	tmp_nd = tmp_nd->child;
	// 	while(tmp_nd->sible)
	// 	{
	// 		printf(" -> { %s }",tmp_nd->args[0]);
	// 		tmp_nd = tmp_nd->sible;
	// 	}
	// 	printf(" -> { %s }",tmp_nd->args[0]);
	// }
	// printf("\n");
	return (mother);
}
