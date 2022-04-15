/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelgharo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 22:14:11 by yelgharo          #+#    #+#             */
/*   Updated: 2021/11/25 20:55:07 by yelgharo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list	*t;

	if (alst)
	{
		if (*alst == NULL)
			*alst = new;
		else
		{
			t = *alst;
			while (t->next != NULL)
				t = t->next;
			t->next = new;
		}
	}
}
