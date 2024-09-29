/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juanherr <juanherr@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 12:19:17 by juaherre          #+#    #+#             */
/*   Updated: 2024/09/29 20:37:24 by juanherr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	var_type(char c, va_list args)
{
	if (c == 'c')
		return (ft_putchar(va_arg(args, int)));
	else if (c == 's')
		return (ft_putstr(va_arg(args, char *)));
	else if (c == 'i' || c == 'd')
		return (ft_putnbr(va_arg(args, int)));
	else if (c == 'u')
		return (ft_put_unsigned(va_arg(args, unsigned int)));
	else if (c == 'x')
		return (ft_put_hex_low(va_arg(args, unsigned int)));
	else if (c == 'X')
		return (ft_put_hex_upp(va_arg(args, unsigned int)));
	else if (c == '%')
		return (ft_putchar('%'));
	else if (c == 'p')
		return (ft_putptr(va_arg(args, void *)));
	else
		return (0);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	size_t	i;
	int		len;

	len = 0;
	i = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			while (str[i] == ' ')
				i++;
			len += var_type(str[i], args);
			i++;
		}
		else
		{
			len += ft_putchar(str[i]);
			i++;
		}
	}
	va_end(args);
	return (len);
}
