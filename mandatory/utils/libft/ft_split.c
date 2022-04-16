/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelgharo <yelgharo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 00:35:40 by yelgharo          #+#    #+#             */
/*   Updated: 2022/04/16 10:50:32 by yelgharo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	countone(char const *s)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (!*s)
		return (0);
	if (s[i] > 32)
		j++;
	while (s[i])
	{
		if (s[i] <= 32 && s[i + 1] > 32 && s[i + 1] != '\0')
			j++;
		i++;
	}
	return (j);
}

static int	countsec(char const *s, int n)
{
	int	i;

	i = 0;
	while (s[n] && s[n] > 32)
	{
		i++;
		n++;
	}
	return (i);
}

static void	**ft_reset(char *ptr, int res)
{
	while (res > 0)
	{
		free (&ptr[res]);
		res--;
	}
	free (ptr);
	return (NULL);
}	

static char	**ft_stack(char **ptr, char const *s)
{
	int		i;
	int		j;
	int		n;

	i = 0;
	j = -1;
	while (s[++j])
	{
		if (s[j] > 32 && i < countone(s))
		{
			n = countsec(s, j);
			ptr[i] = ft_substr(s, j, n);
			ptr[i][n] = (0);
			j = j + n;
			i++;
		}
		if (!ptr)
		{
			ft_reset(*ptr, i);
			return (NULL);
		}
	}
	ptr[i] = (NULL);
	return (ptr);
}

char	**ft_split(char const *s)
{
	char	**ptr;

	if (!s)
		return (NULL);
	ptr = (char **)malloc((countone(s) + 1) * sizeof(char *));
	if (!ptr)
		return (NULL);
	ptr = ft_stack(ptr, s);
	return (ptr);
}
