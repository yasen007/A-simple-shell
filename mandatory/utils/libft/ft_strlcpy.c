/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelgharo <yelgharo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 18:37:28 by yelgharo          #+#    #+#             */
/*   Updated: 2021/11/23 23:15:27 by yelgharo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = ft_strlen(src);
	if (i + 1 <= dstsize)
	{
		ft_memcpy(dst, (char *)src, i);
		dst[i] = 0;
	}
	else if (dstsize)
	{
		ft_memcpy(dst, (char *)src, dstsize - 1);
		dst[dstsize - 1] = 0;
	}
	return (i);
}
