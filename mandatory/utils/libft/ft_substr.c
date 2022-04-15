/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelgharo <yelgharo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 13:46:18 by yelgharo          #+#    #+#             */
/*   Updated: 2021/11/20 04:09:03 by yelgharo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*p;
	size_t	lent;

	if (!s)
		return (NULL);
	lent = ft_strlen(s);
	if (lent <= len)
		len = lent;
	if (lent <= start)
		return (ft_strdup(""));
	p = (char *)malloc(len + 1);
	if (p == NULL)
		return (NULL);
	ft_strlcpy(p, s + start, len + 1);
	return (p);
}
