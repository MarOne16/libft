/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mqaos <mqaos@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 18:47:02 by mqaos             #+#    #+#             */
/*   Updated: 2022/11/01 20:14:59 by mqaos            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrev(char *str)
{
	char	tmp;
	int		i;
	int		j;

	i = 0;
	j = ft_strlen(str) - 1;
	while (i < j)
	{
		tmp = str[i];
		str[i] = str[j];
		str[j] = tmp;
		j--;
		i++;
	}
	return (str);
}

size_t	intlen(int n)
{
	size_t	i;

	i = 0;
	if (n < 0)
	{
		i = 1;
		n *= -1;
	}
	while (n > 0)
	{
		i++;
		n /= 10;
	}
	return (i);
}

char	*ft_put(long z, int x, int u, char *b)
{
	if (z < 0)
	{
		z *= -1;
		x = 1;
	}
	while (z > 0)
	{
		b[++u] = (z % 10) + '0';
		z /= 10;
	}
	if (x == 1)
		b[++u] = '-';
	b[++u] = 0x0;
	return (ft_strrev(b));
}

char	*ft_itoa(int n)
{
	int		u;
	int		x;
	long	z;
	char	*b;

	b = (char *)malloc((intlen(n) + 1) * (sizeof(char)));
	if (!b)
		return (NULL);
	z = n;
	x = 0;
	u = -1;
	if (z == 0)
		return (ft_strdup("0"));
	else
		return (ft_put(z, x, u, b));
}
