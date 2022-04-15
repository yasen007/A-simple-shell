/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelgharo <yelgharo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 00:11:08 by yelgharo          #+#    #+#             */
/*   Updated: 2021/11/20 04:03:18 by yelgharo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	char	*ptr;
	int		i;
	int		j;

	i = 0;
	j = 0;
	str = (char *)s1;
	if (!str)
		return (0);
	while (str[i] && ft_strchr(set, str[i]))
		i++;
	if (str[i] == '\0')
		return (ft_calloc(1, 1));
	j = ft_strlen(str) - 1;
	while (ft_strchr(set, str[j]))
		j--;
	j += 1;
	ptr = (char *)malloc((j - i + 1) * sizeof(char));
	if (!ptr)
		return (0);
	ft_strlcpy(ptr, &str[i], (j - i + 1));
	return (ptr);
}
