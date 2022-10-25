/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_splite.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mqaos <mqaos@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 14:42:55 by mqaos             #+#    #+#             */
/*   Updated: 2022/10/25 16:59:06 by mqaos            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include<string.h>

static	size_t wordC(char const *s, char c)
{
	size_t	nb;
	int		i;
	int		u;

	nb = 0;
	i = 0;
	u = 0;
	while (s[u])
	{
		if (s[u] == c && i == 0)
		{
			i = 1;
			nb++;
		}
		if (s[u + 1] != c)
			i = 0;
		u++;
	}
	return (nb);
}

char	**ft_split(char const *s, char c)
{
	char	**sf;
	size_t	len;
	int		i;

	if (!s)
		return (NULL);
	sf = (char **)malloc((wordC(s, c) + 1) * sizeof(char *));
	if (!sf)
		return (NULL);
	i = 0;
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s)
		{
			if (!strchr(s, c))
				len = ft_strlen(s);
			else
				len = strchr(s, c) - s;
			sf[i++] = ft_substr(s, 0, len);
			s += len;
		}
	}
	sf[i] = NULL;
	return (sf);
}
// int main(int argc, char const *argv[])
// {
//     char *h = "hello world gg kk";
// 	char *j = "hello";
//     int **r = ft_split(h,' ');
//     printf("%ld",strchr(h,'d')-h);
//     return 0;
// }
