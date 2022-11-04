/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mqaos <mqaos@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 18:35:20 by mqaos             #+#    #+#             */
/*   Updated: 2022/11/04 15:27:30 by mqaos            ###   ########.fr       */
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
	if ((h == NULL && len == 0))
		return (0);
	if (n[0] == '\0')
		return (h1);
	while (h1[i])
	{
		k = 0;
		while (h1[i + k] == n[k] && (i + k) < len)
		{
			if (n[k + 1] == '\0')
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
// 	char	*str;
//     if (!(str = ft_strnstr("lorem ipsum dolor sit amet", "dol", 30)))
//         printf("NULL");
//     else
//         printf("%s",str);
// 	return 0;
// }