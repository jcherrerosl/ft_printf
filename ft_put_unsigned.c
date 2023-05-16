/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_unsigned.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juaherre <juaherre@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 13:50:42 by juaherre          #+#    #+#             */
/*   Updated: 2023/05/16 14:05:28 by juaherre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_unsigned(unsigned int n)
{
	char	mod;

	if (n >= 10)
	{
		ft_putunsigned(n / 10);
	}
	mod = (n % 10) + '0';
	ft_putchar(mod);
}
