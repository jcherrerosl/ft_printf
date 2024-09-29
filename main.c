/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juanherr <juanherr@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 17:22:40 by juanherr          #+#    #+#             */
/*   Updated: 2024/09/29 21:49:12 by juanherr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_printf.h"
#include <limits.h>

int	main(void)
{
	int		num = 42;
	char	ch = 'A';
	char	*str = "Hello, World!";
	char	*null_str = NULL;
	unsigned int u_num = 123456789;
	void	*ptr = &num;
	void	*null_ptr = NULL;

	// Comparando printf y ft_printf

	// 1. Caracter no reconocido: %t
	printf("\n--- Test con formato no reconocido (%%t) ---\n");
	printf("printf: %t\n");
	ft_printf("ft_printf: %t\n");

	// 2. String NULL
	printf("\n--- Test con String NULL ---\n");
	printf("printf: %s\n", null_str);
	ft_printf("ft_printf: %s\n", null_str);

	// 3. Signed int extremos
	printf("\n--- Test con Signed int extremos (INT_MAX, INT_MIN) ---\n");
	printf("printf: %d %d\n", INT_MAX, INT_MIN);
	ft_printf("ft_printf: %d %d\n", INT_MAX, INT_MIN);

	// 4. Unsigned int extremo
	printf("\n--- Test con Unsigned int extremo (UINT_MAX) ---\n");
	printf("printf: %u\n", UINT_MAX);
	ft_printf("ft_printf: %u\n", UINT_MAX);

	// 5. Hexadecimal (lowercase) con valor 0
	printf("\n--- Test con Hexadecimal (lowercase) valor 0 ---\n");
	printf("printf: %x\n", 0);
	ft_printf("ft_printf: %x\n", 0);

	// 6. Pointer (NULL)
	printf("\n--- Test con Pointer NULL ---\n");
	printf("printf: %p\n", null_ptr);
	ft_printf("ft_printf: %p\n", null_ptr);

	// 7. Combinación de varios tipos
	printf("\n--- Test con Combinación de tipos ---\n");
	printf("printf: %c %s %d %u %x %p %%\n", ch, str, num, u_num, u_num, ptr);
	ft_printf("ft_printf: %c %s %d %u %x %p %%\n", ch, str, num, u_num, u_num, ptr);

	return (0);
}
