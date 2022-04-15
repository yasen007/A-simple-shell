/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_sec.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelgharo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 23:14:23 by yelgharo          #+#    #+#             */
/*   Updated: 2021/12/10 00:25:58 by yelgharo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_puthex(unsigned int num, int *i)
{
	long	n;
	int		j;
	char	str[10];

	j = 0;
	if (num == 0)
		ft_putchar(48, i);
	while (num != 0)
	{
		n = num % 16;
		if (n < 10)
			n = n + 48;
		else
			n = n + 87;
		str[j++] = n;
		num = num / 16;
	}
	str[j] = '\0';
	while (--j >= 0)
		ft_putchar(str[j], i);
}

void	ft_puthe_x(unsigned int num, int *i)
{
	long	n;
	int		j;
	char	str[10];

	j = 0;
	if (num == 0)
		ft_putchar(48, i);
	while (num != 0)
	{
		n = num % 16;
		if (n < 10)
			n = n + 48;
		else
			n = n + 55;
		str[j++] = n;
		num = num / 16;
	}
	str[j] = '\0';
	while (--j >= 0)
		ft_putchar(str[j], i);
}

void	ft_puthex_adr(unsigned long int num, int *i)
{
	long	n;
	int		j;
	char	str[16];

	j = 0;
	if (num == 0)
		ft_putchar(48, i);
	while (num != 0)
	{
		n = num % 16;
		if (n < 10)
			n = n + 48;
		else
			n = n + 87;
		str[j++] = n;
		num = num / 16;
	}
	str[j] = '\0';
	while (--j >= 0)
		ft_putchar(str[j], i);
}

void	ft_putadr(unsigned long int num, int *i)
{
	ft_putstr("0x", i);
	ft_puthex_adr(num, i);
}
