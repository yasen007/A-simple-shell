/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelgharo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 00:02:53 by yelgharo          #+#    #+#             */
/*   Updated: 2021/11/25 20:23:58 by yelgharo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*p;

	p = NULL;
	if (!lst)
		return ;
	p = (*lst);
	while (p)
	{
		p = (*lst)->next;
		ft_lstdelone((*lst), del);
		*lst = p;
	}
	free(*lst);
}
