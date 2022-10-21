/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mqaos <mqaos@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 22:33:58 by mqaos             #+#    #+#             */
/*   Updated: 2022/10/21 18:46:53 by mqaos            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*y;
	size_t			i;

	y = (unsigned char *)b;
	i = 0;
	while (i < len)
	{
		y[i] = c;
		i++;
	}
	return (y);
}
