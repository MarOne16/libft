/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mqaos <mqaos@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 18:47:02 by mqaos             #+#    #+#             */
/*   Updated: 2022/10/29 21:27:29 by mqaos            ###   ########.fr       */
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

int	intlen(int n)
{
	int	i;

	i = 0;
	if (n < 0)
		i = 1;
	while (n > 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*putnbr(int n)
{
	int		u;
	int		x;
	char	*b;

	b = (char *)malloc((intlen(n) + 1) * (sizeof(char)));
	if (!b)
		return (NULL);
	x = 0;
	u = -1;
	if (n < 0 && n > -2147483648)
	{
		n *= -1;
		x = 1;
	}
	while (n > 0 && n <= 2147483647)
	{
		b[++u] = (n % 10) + '0';
		n /= 10;
	}
	if (x == 1)
		b[++u] = '-';
	b[++u] = 0x0;
	return (b);
}

char	*ft_itoa(int n)
{
	if (n == 0)
		return (ft_strdup("0"));
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	return (ft_strrev(putnbr(n)));
}
