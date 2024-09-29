/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juanherr <juanherr@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 17:22:40 by juanherr          #+#    #+#             */
/*   Updated: 2024/09/29 20:48:15 by juanherr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	main(void)
{
	int	num = 14;
	char	*str = "hola hehe";

	ft_printf("esto es un string: %s\n, esto es un número: %d\n y esta es la dirección de memoria del número %p\n, y el número hexadecimal asociado %x", str, num, &num, &num);
}
