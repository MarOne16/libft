/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mqaos <mqaos@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 14:42:55 by mqaos             #+#    #+#             */
/*   Updated: 2022/11/06 16:27:12 by mqaos            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	nb_c(char const *s, char c)
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

int	strlenword(char const *s, char c, int i)
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

void	ft_free(char **strs, int j)
{
	while (j--)
		free(strs[j]);
	free(strs);
	return ;
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	int		i;
	int		len;
	int		j;

	if (!s)
		return (0x0);
	i = 0;
	j = -1;
	str = (char **)malloc((nb_c(s, c) + 1) * sizeof(char *));
	if (!str)
		return (NULL);
	while (++j < nb_c(s, c))
	{
		while (s[i] == c)
			i++;
		len = strlenword(s, c, i);
		str[j] = ft_substr(s, i, len);
		if (!str[j])
			ft_free(str, j + 1);
		i += len;
	}
	str[j] = 0;
	return (str);
}
// int main()
// {
// 	char **spl = ft_split("Hellof jkdfh khdfg kjgh", 'x');

	// printf("%s\n%s",spl[0],spl[1]);
	// char *ptr = malloc(10);
	// ptr = malloc(10);
// 	while(1);
// }
