/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yelgharo <yelgharo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 21:19:45 by yelgharo          #+#    #+#             */
/*   Updated: 2021/12/10 00:27:36 by yelgharo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H

# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include <stdio.h>
# include <limits.h>

int		ft_printf(const char *fmt, ...);
void	ft_putchar(int c, int *i);
void	ft_putstr(const char *s, int *i);
void	ft_putnbr_d_i(int n, int *i);
void	ft_puthex(unsigned int num, int *i);
void	ft_puthe_x(unsigned int num, int *i);
void	ft_puthex_adr(unsigned long int num, int *i);
void	ft_putadr(unsigned long int num, int *i);
void	ft_putnbr_u(unsigned int n, int *i);
void	ft_flag2_1(char const *str, int *j, int *i, va_list out);
void	ft_flag2_2(char const *str, int *j, int *i, va_list out);
void	ft_flag2_3(char const *str, int *j, int *i, va_list out);

#endif
