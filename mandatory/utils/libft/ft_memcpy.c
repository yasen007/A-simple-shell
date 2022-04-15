/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelgharo <yelgharo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 17:12:52 by yelgharo          #+#    #+#             */
/*   Updated: 2021/11/20 11:51:33 by yelgharo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	char			*s;
	char			*d;

	i = 0;
	s = (char *) src;
	d = (char *) dst;
	if (d == 0 && s == 0)
		return (0);
	while (n)
	{
		d[i] = s[i];
		i++;
		n--;
	}
	return (d);
}
