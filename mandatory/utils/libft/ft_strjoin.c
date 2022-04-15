/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelgharo <yelgharo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 15:43:20 by yelgharo          #+#    #+#             */
/*   Updated: 2021/11/20 03:38:49 by yelgharo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	size_t	n;
	char	*ptr;

	i = 0;
	j = 0;
	if (!s1 || !s2)
		return (NULL);
	n = (ft_strlen(s1) + ft_strlen(s2));
	ptr = malloc(sizeof(char ) * (n + 1));
	if (!ptr)
		return (NULL);
	while (s1[i])
	{
		ptr[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		ptr[i] = s2[j++];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
