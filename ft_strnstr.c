/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mqaos <mqaos@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 18:35:20 by mqaos             #+#    #+#             */
/*   Updated: 2022/10/21 15:34:37 by mqaos            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *h, const char *n, size_t len)
{
	char	*h1;
	char	*n1;
	size_t	i;
	size_t	k;

	n1 = (char *)n;
	h1 = (char *)h;
	i = 0;
	k = 0;
	if (n1[0] != '\0')
	{
		while ((h1[i] || n1[i]) && i < len)
		{
			while (h1[i + k] == n1[k])
			{
				if (n1[k + 1] == '\0')
					return (h1 + i);
				k++;
			}
			i++;
		}
		return (0);
	}
	else
		return (h1);
}

// int main()
// {
// 	char mar[] = "-wa khdem a tebi";
// 	printf("%s\n", strnstr(mar, 0, 0));
// 	// printf("%s",ft_strnstr(mar,0,0));
// 	return 0;
// }