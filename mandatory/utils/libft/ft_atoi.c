/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelgharo <yelgharo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/07 17:17:32 by yelgharo          #+#    #+#             */
/*   Updated: 2022/04/09 00:42:05 by yelgharo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

double	lon_min_max(double d, int sign)
{
	d = d * sign;
	if (d >= LONG_MAX)
		return (-1);
	else if (d <= LONG_MIN)
		return (0);
	else
		return (d);
}

int	ft_atoi(const char *str)
{
	int		i;
	int		moins;
	double	res;

	i = 0;
	moins = 0;
	res = 0;
	while ((str[i]) && (str[i] == '\t' || str[i] == '\n' || str[i] == '\v'
			|| str[i] == '\f' || str[i] == '\r' || str[i] == ' '))
		i++;
	if ((str[i]) && (str[i] == '-' || str[i] == '+'))
	{
		if (str[i] == '-')
			moins++;
		i++;
	}
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + str[i] - '0';
		i++;
	}
	if (moins % 2 == 0)
		return (lon_min_max(res, 1));
	return (lon_min_max(res, -1));
}
