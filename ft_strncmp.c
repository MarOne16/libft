/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mqaos <mqaos@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 17:19:21 by mqaos             #+#    #+#             */
/*   Updated: 2022/10/21 15:34:32 by mqaos            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*c1;
	unsigned char	*c2;

	i = 0;
	c1 = (unsigned char *)s1;
	c2 = (unsigned char *)s2;
	while ((c1[i] || c2[i]) && i < n)
	{
		if (c1[i] != c2[i])
		{
			return (c1[i] - c2[i]);
		}
		i++;
	}
	return (0);
}

// int main(int argc, char const *argv[])
// {
// 	char *s1 = "123";
// 	int *s2 = {1,2,3};
// 	printf("%d\n",ft_strncmp(s1,s2,0));
// 	printf("%d",strncmp(s1,s2,0));
// 	return 0;
// }
