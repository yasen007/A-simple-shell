/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelgharo <yelgharo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 11:47:24 by yelgharo          #+#    #+#             */
/*   Updated: 2021/11/23 21:37:54 by yelgharo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	l;
	char	*str;

	i = 0;
	l = (char )c;
	str = (char *)s;
	while (str[i] && str[i] != l)
		i++;
	if (str[i] == l)
		return (&str[i]);
	return (0);
}
