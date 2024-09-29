/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_hex_upp.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juanherr <juanherr@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 23:14:16 by juanherr          #+#    #+#             */
/*   Updated: 2024/09/29 23:14:18 by juanherr         ###   ########.fr       */
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

int	ft_put_hex_upp(size_t n)
{
	int	len;

	len = ft_hexlen(n);
	if (n >= 16)
	{
		ft_put_hex_upp(n / 16);
		ft_put_hex_upp(n % 16);
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
			n = n - 10 + 'A';
			write (1, &n, 1);
		}
	}	
	return (len);
}
