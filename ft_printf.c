/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juaherre <juaherre@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 12:19:17 by juaherre          #+#    #+#             */
/*   Updated: 2023/11/22 13:34:56 by juaherre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	var_type(char c, va_list thing)
{
	if (c == 'c')
		return (ft_putchar(va_arg(thing, int)));
	if (c == 's')
		return (ft_putstr(va_arg(thing, char *)));
	if (c == 'i' || c == 'd')
		return (ft_putnbr(va_arg(thing, int)));
	if (c == 'u')
		return (ft_put_unsigned(va_arg(thing, unsigned int)));
	if (c == 'x')
		return (ft_put_hex_low(va_arg(thing, unsigned int)));
	if (c == 'X')
		return (ft_put_hex_upp(va_arg(thing, unsigned int)));
	if (c == '%')
		return (ft_put_perc(va_arg(thing, int)));
	if (c == 'p')
		return (ft_putptr(va_arg(thing, char *)));
	return (0);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	int		len;
	va_list	arg;

	va_start(arg, str);
	len = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] == '%' && str[i + 1])
		{
			len--;
			i++;
			while (str[i] == 32)
			{
				i++;
				len--;
			}
			len += var_type(i, arg);
		}
		else
			write(1, &str[i], 1);
		i++;
	}
	va_end(arg);
	return (len + i);
}
