/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mqaos <mqaos@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 20:56:59 by mqaos             #+#    #+#             */
/*   Updated: 2022/10/29 12:28:30 by mqaos            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t			i;
	size_t			max;
	void			*cl;

	max = count * size;
	cl = malloc(max);
	i = -1;
	if (!cl)
		return (NULL);
	while (++i < max)
		ft_bzero(cl, i);
	return (cl);
}
