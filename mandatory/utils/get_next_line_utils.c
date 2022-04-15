/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelgharo <yelgharo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 16:54:13 by yelgharo          #+#    #+#             */
/*   Updated: 2022/04/15 13:44:31 by yelgharo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/minishell.h"

char	*ft_strjoin_custom(char *s1, char *s2)
{
	size_t	i;
	size_t	j;
	size_t	n;
	char	*ptr;

	i = -1;
	j = 0;
	if (!s1)
		s1 = (char *)ft_calloc(1, 1);
	if (!s1 || !s2)
		return (NULL);
	n = (ft_strlen(s1) + ft_strlen(s2));
	ptr = malloc(sizeof(char ) * (n + 1));
	if (!ptr)
		return (NULL);
	while (s1[++i])
		ptr[i] = s1[i];
	while (s2[j])
		ptr[i++] = s2[j++];
	ptr[i] = '\0';
	free(s1);
	return (ptr);
}

int	ft_strchr_custom(char *s)
{
	int		i;

	i = 0;
	while (s[i] && s[i] != '\n')
		i++;
	if (s[i] == '\n')
		return (1);
	return (0);
}
