/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_unsigned.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juaherre <juaherre@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 13:50:42 by juaherre          #+#    #+#             */
/*   Updated: 2023/11/22 12:34:55 by juaherre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_unsigned(unsigned int n)
{
	int	mod;

	if (n >= 10)
	{
		ft_put_unsigned(n / 10);
	}
	mod = (n % 10) + '0';
	ft_putchar(mod);
	return (len_num(n));
}
