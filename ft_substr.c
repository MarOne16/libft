/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mqaos <mqaos@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 14:56:46 by mqaos             #+#    #+#             */
/*   Updated: 2022/10/28 21:18:58 by mqaos            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*r;
	size_t	i;

	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	r = malloc(sizeof(char) * len + 1);
	i = 0;
	if (!r)
		return (NULL);
	if (len > ft_strlen(s) - start)
	len = ft_strlen(s) - start;
	while (i < len)
	{
		r[i] = s[start + i];
		i++;
	}
	r[i] = '\0';
	return (r);
}
