/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juaherre <juaherre@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 12:12:27 by juaherre          #+#    #+#             */
/*   Updated: 2023/05/19 14:24:57 by juaherre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	len_num(int n)
{
	int	i;

	i = 0;
	if (n < 0)
		i++;
	while (n / 10 != 0)
	{
		n /= 10;
		i++;
	}
	i++;
}

int	ft_putnbr(int n)
{
	char	mod;

	if (n == -2147483648)
	{
		return (ft_putstr("-2147483648"));
	}
	if (n < 0)
	{
		ft_putchar('-');
		n = -n;
	}
	if (n >= 10)
	{
		ft_putnbr(n / 10);
	}
	mod = (n % 10) + '0';
	ft_putchar(mod);
	return (len_num(n));
}
