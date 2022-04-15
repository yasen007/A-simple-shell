/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelgharo <yelgharo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 18:20:48 by yelgharo          #+#    #+#             */
/*   Updated: 2021/12/02 21:09:19 by yelgharo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	l;
	unsigned char	*str;

	i = 0;
	l = (unsigned char)c;
	str = (unsigned char *)s;
	while (str[i] != l && n--)
		i++;
	if (str[i] == l && n)
		return (str + i);
	return (0);
}
