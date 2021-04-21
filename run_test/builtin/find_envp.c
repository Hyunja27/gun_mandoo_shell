#include "minishell.h"

char	*find_env(char *key, char **en)
{
	int		i;

	i = -1;
	while (en[++i])
	{
		if (!strncmp(key, en[i], ft_strlen(key)))
			return (en[i]);
	}
	return (0);
}

char	*find_env_val(char *key, char **en)
{
	int		i;
	char	*tmp;
	char	*rt;

	i = -1;
	tmp = find_env(key, en);
	if (!tmp)
		return (0);
	rt = ft_strdup(tmp + ft_strlen(key) + 1);
	// free(tmp);
	return (rt);
}
