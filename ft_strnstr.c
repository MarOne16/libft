/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mqaos <mqaos@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 18:35:20 by mqaos             #+#    #+#             */
/*   Updated: 2022/10/29 13:05:40 by mqaos            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *h, const char *n, size_t len)
{
	char	*h1;
	size_t	i;
	size_t	k;

	h1 = (char *)h;
	i = 0;
	k = 0;
	if (h == NULL && len == 0)
		return (0);
	if (n[0] == '\0')
		return (h1);
	while (h1[i])
	{
		while (h1[i + k] == n[k] && (i + k) < len)
		{
			if (n[k + i] == '\0' && n[k] == '\0')
				return (h1 + i);
			k++;
		}
		if (n[k] == '\0')
			return (h1 + i);
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