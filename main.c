
#include "ft_printf.h"
#include <stdio.h>


int main()
{
    //int p;
    char c = 'c';
    char *p = &c;
    char *s = "patata";
    int u = -12;
    
    //int hex = -4779;

    //ft_printf("Hola manin %    s patata", array);
    //ft_printf("%c", c);
    //ft_printf("\n");
    //ft_printf("%s", s);
    //ft_printf("\n");
    //ft_printf("%p", &p);
    //ft_printf("\n");
    //ft_printf("%d", 8);
    //ft_printf("\n");
    //ft_printf("\n");
    //ft_printf("%i", d),
    //ft_printf("%u", d);
    //ft_printf("\n");
    //ft_printf("%x", hex);
    //ft_printf("\n");
    //ft_printf("%X", hex);
    //ft_printf("\n");
    //ft_printf("%%");
    //ft_printf("    hola       que     tal %    i\n", 2);
    ft_printf("%p",p);
    //printf("%p",p);
    ft_putptr(p);
    ft_putchar('\n');
    ft_put_hex_low(c);

    return 0;

}