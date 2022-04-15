/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelgharo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 01:22:24 by yelgharo          #+#    #+#             */
/*   Updated: 2021/11/25 01:47:20 by yelgharo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*haystack;
	t_list	*new;

	if (!lst || !f)
		return (NULL);
	haystack = lst;
	new = NULL;
	while (lst)
	{
		haystack = ft_lstnew(f(lst->content));
		if (!haystack)
		{
			ft_lstclear(&haystack, del);
			return (NULL);
		}
		ft_lstadd_back(&new, haystack);
		lst = lst->next;
	}
	return (new);
}
