#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdio.h>
#include <stdlib.h>
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

int (*get_print_func(const char *s, int index))(va_list, char *, unsigned int);
int print_buf(char *buf, unsigned int nbuf);
unsigned int handl_buf(char *buf, char c, unsigned int ibuf);


#endif /* MAIN_H */
