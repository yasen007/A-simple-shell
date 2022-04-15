/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelgharo <yelgharo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 20:43:20 by yelgharo          #+#    #+#             */
/*   Updated: 2021/11/23 21:21:27 by yelgharo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int	i;
	int	n;

	if (!(*needle))
		return ((char *)haystack);
	while (*haystack && len)
	{
		i = 0;
		n = len;
		if (haystack[i] == needle[i])
		{
			while (haystack[i] == needle[i] && needle[i] && n)
			{
				i++;
				n--;
			}
		}
		if (needle[i] == '\0')
			return ((char *)haystack);
		haystack++;
		len--;
	}
	return (NULL);
}
