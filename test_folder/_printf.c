#include "main.h"

/**
 * find_function - Function that finds formats for _printf
 * calls the corresponding function
 * 
 * @format: Format (char, string, int decimal)
 * 
 * Return: "NULL" OR function associated
 */
int (*find_function(const char *format))(va_list)
{
    unsigned int i = 0;
    code_f find_f[] = {
        //{"c", print_char},
        {"s", print_string},
        {"i", print_int},
        /*{"d", print_dec},
        {"r", print_rev},
        {"b", print_bin},
        {"u", print_unsig},
        {"o", print_octal},
        {"x", print_x},
        {"X", print_X},
        {"R", print_rot13},
        {NULL, NULL} */
    };

    while (find_f[i].sc)
    {
        if (find_f[i].sc[0] == (*format))
                return (find_f[i].f);
        i++;
    }
    return (NULL);
}

/**
 * _printf - Function prints produes output according to a format
 * 
 * @format: input (char, string, int, decimal)
 * 
 * Return: size of the output text
 */
int _printf(const char *format, ...)
{
    va_list ap;
    int (*f)(va_list);
    unsigned int i = 0, cprint = 0;

    if (format == NULL)
        return (-1);
        va_start(ap, format);
        while (format[i])
        {
            while (format[i] != '%' && format[i])
            {
                _putchar(format[i]);
                cprint++;
                i++;
            }
            if (format[i] == '\0')
                return (cprint);
            f = find_function(&format[i + 1]);
            if (f != NULL)
            {
                cprint += f(ap);
                i += 2;
                continue;
            }
            if (!format[i + 1])
                return (-1);
            _putchar(format[i]);
            cprint++;
            if (format[i + 1] == '%')
                i += 2;
            else
                i++;        
        }
        va_end(ap);
        return (cprint);
}
