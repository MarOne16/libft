/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mqaos <mqaos@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 12:51:39 by mqaos             #+#    #+#             */
/*   Updated: 2022/10/21 21:13:57 by mqaos            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


size_t	ft_strlcat(char	*dst, const char	*src, size_t n)
{
	size_t			i;
	size_t			s;
	size_t			d;

	i = 0;
	d = strlen(dst);
	s = strlen(src);
	if (d > n)
		return (n + s);
	while (n > 0 && src[i] != '\0')
	{
		dst[n] = src[i];
		n++;
		i++;
	}
	dst[i] = '\0';
	return (d + i);
}

// int main(int argc, char const *argv[])
// {
// 	char *str = "n\0AA";
// 	char buff1[0xF00] = "AAAAAAAAAAAAAAAA";
// 	char buff2[0xF00] = "AAAAAAAAAAAAAAAA";
// 	char buff3[0xF00] = "AAAAAAAAAAAAAAAA";
// 	char buff4[0xF00] = "AAAAAAAAAAAAAAAA";
// 	size_t max = 10;
//     printf("%lu\n",strlcat(buff1,buff2,max));
//     printf("%lu",ft_strlcat(buff3,buff4,max));
//     return 0;
// }