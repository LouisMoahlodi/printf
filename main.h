#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>

int _putchar(char c);
int _printf(const char *format, ...);
int print_char(va_list c);
int print_string(va_list s);
int print_int(va_list i);
int print_dec(va_list d);

/**
 * struct print - struct stores pointers to a printer function
 * 
 * @sc: The specifiers
 * @f: The function associated
 */
typedef struct code_format
{
    char *sc;
    int (*f)(va_list);
}code_f;

#endif /* MAIN_H */
