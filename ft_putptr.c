/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juanherr <juanherr@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 12:18:48 by juaherre          #+#    #+#             */
/*   Updated: 2024/09/29 21:39:24 by juanherr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	len_hex(size_t num)
{
	int	length;

	length = 0;
	if (num == 0)
		return (1);
	while (num != 0)
	{
		num /= 16;
		length++;
	}
	return (length);
}

int	ft_putptr(void *ptr)
{
	size_t	n;
	int		len;

	if (!ptr)
		return (ft_putstr("(nil)"));
	n = (size_t)ptr;
	len = ft_putstr("0x");
	len += ft_put_hex_low(n);
	return (len);
}
