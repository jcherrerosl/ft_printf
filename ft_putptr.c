/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juanherr <juanherr@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 12:18:48 by juaherre          #+#    #+#             */
/*   Updated: 2024/09/29 17:17:10 by juanherr         ###   ########.fr       */
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

	n = (size_t)ptr;
	ft_putstr("0x");
	len = 2;
	if (ptr == NULL)
	{
		write(1, "0", 1);
		len = len + 1;
	}
	else
	{
		ft_put_hex_low(n);
		len = len + len_hex(n);
	}
	return (len);
}
