/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juaherre <juaherre@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 12:19:17 by juaherre          #+#    #+#             */
/*   Updated: 2023/05/03 12:26:03 by juaherre         ###   ########.fr       */
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
	return (0);
}
