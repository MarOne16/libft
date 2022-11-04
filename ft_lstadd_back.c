/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mqaos <mqaos@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 17:04:50 by mqaos             #+#    #+#             */
/*   Updated: 2022/11/03 19:20:46 by mqaos            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void	ft_lstadd_back(t_list **lst, t_list *new)
// {
// 	t_list	*lst2;

// 	if (*lst == NULL)
// 	{
// 		*lst = new;
// 	}
// 	else
// 	{
// 		lst2 = ft_lstlast(*lst);
// 		lst2 -> next = new;
// 	}
// }
void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*lst2;
	if (*lst == NULL)
	{
		*lst = new;
	}
	else
	{
		lst2 = ft_lstlast(*lst);
		lst2 ->next = new;
	}
}