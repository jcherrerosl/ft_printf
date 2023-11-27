/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juaherre <juaherre@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 12:18:48 by juaherre          #+#    #+#             */
/*   Updated: 2023/11/27 11:05:27 by juaherre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int len_hex(int num) //porque no puedo usar strlen al ser número, aunque tenga letras
{
    int	length;
	
    length = 0;
    if (num == 0)
        return (1); // El número 0 tiene un solo dígito en hexadecimal

    while (num != 0)
    {
        num /= 16; // Dividir por la base del sistema hexadecimal
        length++;
    }

    return length;
}

int	ft_putptr(void *ptr)
{
	size_t	n;
	int		len;

	n = (size_t)ptr;
	write(1, "0x", 2);
	len = 2; //el "0x"
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
