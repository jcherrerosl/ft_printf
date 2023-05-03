/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juaherre <juaherre@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 12:06:43 by juaherre          #+#    #+#             */
/*   Updated: 2023/05/03 12:20:25 by juaherre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stddef.h> //para size_t
# include <stdarg.h> //para las funciones de arg variables (va_...)

int	ft_putchar(int c);
int	ft_putstr(char *s);
int	ft_putnbr(int n);

#endif