#include "ft_printf.h"
#include <stdio.h>

int main() {

    int n1;
    int n2;

    n1 = -1544510;
    n2 = n1;
    // Prueba de impresión de caracteres
    ft_printf("ft_printf - Carácter: %c\n", 'A');
    printf("printf - Carácter: %c\n\n", 'A');

    // Prueba de impresión de cadenas
    ft_printf("ft_printf - Cadena: %s\n", "Hola Mundo");
    printf("printf - Cadena: %s\n\n", "Hola Mundo");

    // Prueba de impresión de números enteros
    n1 = ft_printf("ft_printf - Número entero: %d\n", n1);
    n2 = printf("printf - Número entero: %d\n\n", n2);

    // Prueba de impresión de números enteros sin signo
    ft_printf("ft_printf - Número sin signo: %u\n", 123);
    printf("printf - Número sin signo: %u\n\n", 123);

    // Prueba de impresión de números en formato hexadecimal (minúsculas y mayúsculas)
    ft_printf("ft_printf - Hexadecimal (minúsculas): %x\n", 0x1a2b3c);
    printf("printf - Hexadecimal (minúsculas): %x\n\n", 0x1a2b3c);

    ft_printf("ft_printf - Hexadecimal (mayúsculas): %X\n", 0x1a2b3c);
    printf("printf - Hexadecimal (mayúsculas): %X\n\n", 0x1a2b3c);

    // Prueba de impresión de punteros
    int num = 10;
    ft_printf("ft_printf - Puntero: %p\n", &num);
    printf("printf - Puntero: %p\n\n", &num);

    // Prueba de impresión de porcentaje
    ft_printf("ft_printf - Porcentaje: %%\n");
    printf("printf - Porcentaje: %%\n\n");

}
