/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mqaos <mqaos@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 18:35:20 by mqaos             #+#    #+#             */
/*   Updated: 2022/10/27 22:50:49 by mqaos            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// char	*ft_strnstr(const char *h, const char *n, size_t len)
// {
// 	char	*h1;
// 	size_t	i;
// 	size_t	k;

// 	h1 = (char *)h;
// 	i = 0;
// 	k = 0;
// 	if (h == 0 && len == 0)
// 		return (0);
// 	if (!n)
// 		return (h1);
// 	while (h1[i])
// 	{
// 		while (h1[i + k] == n[k] && (i + k) < len)
// 		{
// 			if (n[k + i] == '\0' && n[k] == '\0')
// 				return (h1 + i);
// 			k++;
// 		}
// 		if (n[k] == '\0')
// 			return (h1 + i);
// 		i++;
// 	}	
// 	return (0);
// }
char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	c;
	size_t	n_len;
	char	*hay;

	i = 0;
	hay = (char *)haystack;
	n_len = ft_strlen(needle);
	if (n_len == 0 || haystack == needle)
		return (hay);
	while (hay[i] != '\0' && i < len)
	{
		c = 0;
		while (hay[i + c] != '\0' && needle[c] != '\0'
			&& hay[i + c] == needle[c]
			&& i + c < len)
			c++;
		if (c == n_len)
			return (hay + i);
		i++;
	}
	return (0);
}
// int main()
// {
// 	char *s1 = "A";
// 	size_t max = strlen(s1) + 1;
// 	char *i1 = strnstr(s1, s1, max);
// 	char *i2 = ft_strnstr(s1, s1, max);
// 	printf("%s\n%s",i1,i2);
// 	return 0;
// }