/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelgharo <yelgharo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 18:08:56 by yelgharo          #+#    #+#             */
/*   Updated: 2021/11/22 02:26:23 by yelgharo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count(int n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

static char	*f(char *ptr, int j, int n)
{
	while (j > 0)
	{
		ptr[j] = n % 10 * -1 + 48;
		n = n / 10;
		(j) -= 1;
	}
	ptr[j] = '-';
	return (ptr);
}

char	*ft_itoa(int n)
{
	char	*ptr;
	int		j;

	j = count(n);
	if (n < 0)
	{
		ptr = malloc((j + 2) * sizeof(char));
		if (!ptr)
			return (NULL);
		ptr[j + 1] = '\0';
		return (f(ptr, j, n));
	}
	ptr = malloc((count(n) + 1) * sizeof(char));
	if (!ptr)
		return (NULL);
	ptr[j] = '\0';
	while (j > 0)
	{
		j--;
		ptr[j] = n % 10 + 48;
		n = n / 10;
	}
	return (ptr);
}
