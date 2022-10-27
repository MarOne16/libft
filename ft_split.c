/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mqaos <mqaos@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 14:42:55 by mqaos             #+#    #+#             */
/*   Updated: 2022/10/27 21:05:57 by mqaos            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	nb_c(char const *s, char c)
{
	int	i;
	int	nb;

	i = 0;
	nb = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			nb++;
			while (s[i] != c && s[i])
				i++;
		}
		else
			i++;
	}
	return (nb);
}

static int	strlenword(char const *s, char c, int i)
{
	int	len;

	len = 0;
	while (s[i] != c && s[i])
	{
		len++;
		i++;
	}
	return (len);
}

static void	ft_free(char **strs, int j)
{
	while (j-- > 0)
		free(strs[j]);
	free(strs);
	return ;
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	int		i;
	int		nb;
	int		len;
	int		j;

	i = 0;
	j = -1;
	nb = nb_c(s, c);
	str = (char **)malloc((nb + 1) * sizeof(char *));
	if (!str)
		return (NULL);
	while (++j < nb)
	{
		while (s[i] == c)
			i++;
		len = strlenword(s, c, i);
		str[j] = ft_substr(s, i, len);
		if (!str[j])
			ft_free(str, j);
		i += len;
	}
	str[j] = 0;
	return (str);
}
