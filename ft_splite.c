/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_splite.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mqaos <mqaos@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 14:42:55 by mqaos             #+#    #+#             */
/*   Updated: 2022/10/25 18:30:10 by mqaos            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t word_c(char const *s, char c)
{
	size_t nb;
	int i;
	int u;

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
	struct spl	spl;
	char		**sf;

	if (!s)
		return (NULL);
	sf = malloc((word_c(s, c) + 1) * sizeof(char *));
	if (!sf)
		return (NULL);
	spl.i = 0;
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s)
		{
			if (!ft_strchr(s, c))
				spl.len = ft_strlen(s);
			else
				spl.len = ft_strchr(s, c) - s;
			sf[spl.i++] = ft_substr(s, 0, spl.len);
			s += spl.len;
		}
	}
	sf[spl.i] = NULL;
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
