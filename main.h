#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>

/**
 * struct print - struct stores pointers to a printer function
 * 
 * @type_arg: indentifier 
 * @f: pointer to a print functions
 */
typedef struct print
{
    char *type_arg;
    int (*f)(va_list, char *, unsigned);
}print_t;

int _printf(const char *format, ...);
int print_int(va_list arguments, char *buf, unsigned ibuf);

#endif /* MAIN_H */