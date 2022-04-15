/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_conditions.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelgharo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/23 05:50:06 by yelgharo          #+#    #+#             */
/*   Updated: 2021/12/23 05:50:12 by yelgharo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_flag2_3(char const *str, int *j, int *i, va_list out)
{
	int	num;

	num = va_arg(out, unsigned int);
	if (str[*j] == '#')
	{
		while (str[*j] == '#')
			(*j)++;
		if (num == 0)
			ft_puthex(num, i);
		else
		{
			if (str[*j] == 'x')
			{
				ft_putstr("0x", i);
				ft_puthex(num, i);
			}
			else if (str[*j] == 'X')
			{
				ft_putstr("0X", i);
				ft_puthe_x(num, i);
			}
		}
	}
}

void	ft_flag2_2(char const *str, int *j, int *i, va_list out)
{
	int	num;

	num = va_arg(out, int);
	if (str[*j] == ' ')
	{
		while (str[*j] == ' ')
			(*j)++;
		if ((str[*j] == 'd' || str[*j] == 'i') && num >= 0)
		{
			ft_putchar(' ', i);
		}
		ft_putnbr_d_i(num, i);
	}
}

void	ft_flag2_1(char const *str, int *j, int *i, va_list out)
{
	int	num;

	num = va_arg(out, int);
	if (str[*j] == '+')
	{
		while (str[*j] == '+')
			(*j)++;
		if (str[*j] == 'd' || str[*j] == 'i')
		{
			if (num < 0)
				ft_putnbr_d_i(num, i);
			else
			{
				ft_putchar('+', i);
				ft_putnbr_d_i(num, i);
			}
		}
	}
}
