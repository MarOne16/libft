/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mqaos <mqaos@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 21:06:44 by mqaos             #+#    #+#             */
/*   Updated: 2022/10/21 19:05:47 by mqaos            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	i;
	char	*s11;

	s11 = (char *)malloc(sizeof(char) * ft_strlen(s1));
	i = 0;
	if (!s11)
		return (NULL);
	while (s1[i])
	{
		s11[i] = s1[i];
		i++;
	}
	return (s11);
}
