/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mqaos <mqaos@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 18:12:47 by mqaos             #+#    #+#             */
/*   Updated: 2022/10/21 17:25:52 by mqaos            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;
	size_t			i;

	i = 0;
	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	if (!d && !s)
		return (NULL);
	if (d < s)
	{
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
		return (d);
	}
	while (i < n)
	{
		d[n - i - 1] = s[n - i - 1];
		i++;
	}
	return (d);
}

// int main(int argc, char const *argv[])
// {
// 	int s[] = {9, 8, 7, 6, 5, 4, 3, 2};
// 	ft_memmove(s + 2, s, sizeof(int) * 10);
// 	for (size_t i = 0; i < 8; i++)
// 	{
// 		printf("%d\n", s[i]);
// 	}
// 	int d[] = {9, 8, 7, 6, 5, 4, 3, 2};
// 	printf("next\n");
// 	memmove(d + 2, d, sizeof(int) * 10);
// 	for (size_t i = 0; i < 8; i++)
// 	{
// 		printf("%d\n", d[i]);
// 	}
// 	return 0;
// }
