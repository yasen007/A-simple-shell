/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelgharo <yelgharo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 21:01:22 by yelgharo          #+#    #+#             */
/*   Updated: 2021/11/20 03:42:17 by yelgharo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	res;
	size_t	j;
	char	*str;

	i = ft_strlen(dst);
	str = (char *) src;
	res = ft_strlen(str);
	j = 0;
	if (dstsize <= i)
		res = dstsize + res;
	else
		res = i + res;
	if (i < dstsize - 1)
	{
		while (str[j] && i < dstsize - 1 && dstsize != 0)
			dst[i++] = str[j++];
		dst[i] = '\0';
	}
	return (res);
}
