/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mqaos <mqaos@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 12:51:39 by mqaos             #+#    #+#             */
/*   Updated: 2022/10/21 22:17:10 by mqaos            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char	*dst, const char	*src, size_t n)
{
	size_t			i;
	size_t			s;
	size_t			d;

	i = 0;
	s = ft_strlen(src);
	if (dst == NULL && n == 0)
		return (s);
	d = ft_strlen(dst);
	if (d > n)
		return (n + s);
	while (d + 1 < n && src[i] != '\0')
	{
		dst[d] = src[i];
		d++;
		i++;
	}
	dst[d] = '\0';
	return (ft_strlen(dst) + ft_strlen(src + i));
}


// int main(int argc, char const *argv[])
// {
// 	char *str = "n\0AA";
//     char b[0xF] = "nyan !";
// 	size_t max = 0;
	
//     printf("%lu\n",strlcat(((void *)0), b, 0));
//     printf("%lu",ft_strlcat(((void *)0), b, 0));
//     return 0;
// }