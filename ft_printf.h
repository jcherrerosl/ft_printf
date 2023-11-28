/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juaherre <juaherre@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 12:06:43 by juaherre          #+#    #+#             */
/*   Updated: 2023/11/28 15:03:46 by juaherre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h> //para las funciones de arg variables (va_...)
# include <unistd.h> // para el write
# include <stddef.h> //para size_t

int	ft_printf(const char *str, ...);
int	ft_putchar(int c);
int	ft_putstr(char *s);
int	ft_putnbr(int n);
int ft_putptr(void *ptr);
int	ft_put_unsigned(unsigned int n);
int	ft_put_hex_low(size_t n);
int	ft_put_hex_upp(size_t n);
int	ft_put_perc(int c);

#endif