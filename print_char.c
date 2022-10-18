#include "main.h"

/**
 * print_char - writes the character c to stdout
 * 
 * @c: The charcter to print
 * 
 * Return: 1
 */
int print_char(va_list c)
{
    unsigned int my_char;

    my_char = va_arg(c, int);
    _putchar(my_char);
    return (1);
}

/**
 * print_percentage - Printing percentage sign
 * 
 * Return: 1
 */
int print_percentage(void)
{
    _putchar('%');
    return (1);
}