/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_unsigned.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juaherre <juaherre@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 13:50:42 by juaherre          #+#    #+#             */
/*   Updated: 2023/11/28 14:57:20 by juaherre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_unsigned(unsigned int nb)
{
	int len;

	len = 0;
	if(nb > 9)
	{
		len += ft_put_unsigned(nb / 10);
		len += ft_put_unsigned(nb % 10);
	}
	else
		len += ft_putchar(nb + 48);
	return (len);
}
