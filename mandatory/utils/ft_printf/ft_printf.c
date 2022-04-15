/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelgharo <yelgharo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 21:14:57 by yelgharo          #+#    #+#             */
/*   Updated: 2021/12/10 00:29:38 by yelgharo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_condition(char c, int *i, va_list out)
{
	if (c == '%')
		ft_putchar('%', i);
	if (c == 'c')
		ft_putchar(va_arg(out, int), i);
	if (c == 's')
		ft_putstr(va_arg(out, char *), i);
	if (c == 'd' || c == 'i')
		ft_putnbr_d_i(va_arg(out, int), i);
	if (c == 'x')
		ft_puthex(va_arg(out, unsigned int), i);
	if (c == 'X')
		ft_puthe_x(va_arg(out, unsigned int), i);
	if (c == 'p')
		ft_putadr(va_arg(out, unsigned long int), i);
	if (c == 'u')
		ft_putnbr_u(va_arg(out, unsigned int), i);
}

void	ft_chek(char const *str, int *j, int *i, va_list out)
{
	if (str[*j] == 'c' || str[*j] == 's' || str[*j] == 'd'
		|| str[*j] == 'i' || str[*j] == 'u' || str[*j] == 'x'
		|| str[*j] == 'X' || str[*j] == 'p' || str[*j] == '%')
		ft_condition(str[*j], i, out);
	if (str[*j] == '#' )
		ft_flag2_3(str, j, i, out);
	if (str[*j] == ' ')
		ft_flag2_2(str, j, i, out);
	if (str[*j] == '+')
		ft_flag2_1(str, j, i, out);
}

int	ft_printf(const char *fmt, ...)
{
	va_list	out;
	int		i;	
	int		j;

	i = 0;
	j = 0;
	va_start(out, fmt);
	while (fmt[j])
	{
		if (fmt[j] == '%')
		{
			j++;
			ft_chek(fmt, &j, &i, out);
		}
		else
			ft_putchar(fmt[j], &i);
		j++;
	}
	va_end(out);
	return (i);
}
