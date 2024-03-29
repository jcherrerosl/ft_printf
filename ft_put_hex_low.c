/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_hex_low.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juaherre <juaherre@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 13:57:51 by juaherre          #+#    #+#             */
/*   Updated: 2023/11/28 13:27:44 by juaherre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_hexlen(unsigned int n)
{
	int	i;

	i = 0;
	while (n >= 16)
	{
		n = n / 16;
		i++;
	}
	i++;
	return (i);
}

int	ft_put_hex_low(size_t n)
{
	int	len;

	len = ft_hexlen(n);
	if (n >= 16)
	{
		ft_put_hex_low(n / 16);
		ft_put_hex_low(n % 16);
	}
	else
	{
		if (n < 10)
		{
			n = n + '0';
			write (1, &n, 1);
		}
		else if (n >= 10 && n < 16)
		{
			n = n - 10 + 'a';
			write (1, &n, 1);
		}
	}
	return (len);
}
