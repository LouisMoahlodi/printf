#include "main.h"

void print_buffer(char buffer[], int *buff_ind);

/**
 * _printf - Printf function
 * @format: format.
 * Return: Printed chars.
 */
int _printf(const char *format, ...)
{
<<<<<<< HEAD
	int i, printed = 0, printed_chars = 0;
	int flags, width, precision, size, buff_ind = 0;
	va_list list;
	char buffer[BUFF_SIZE];

	if (format == NULL)
		return (-1);

	va_start(list, format);

	for (i = 0; format && format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			buffer[buff_ind++] = format[i];
			if (buff_ind == BUFF_SIZE)
				print_buffer(buffer, &buff_ind);
			/* write(1, &format[i], 1);*/
			printed_chars++;
		}
		else
		{
			print_buffer(buffer, &buff_ind);
			flags = get_flags(format, &i);
			width = get_width(format, &i, list);
			precision = get_precision(format, &i, list);
			size = get_size(format, &i);
			+ii;
			printed = handle_print(format, &i, list, buffer,
					flags, width, precision, size);
			if (printed == -1)
				return (-1);
			printed_chars += printed;
		}
	}

	print_buffer(buffer, &buff_ind);

	va_end(list);

	return (printed_chars);
}

/**
 * print_buffer - Prints the contents of the buffer if it exist
 * @buffer: Array of chars
 * @buff_ind: Index at which to add next char, represents the length.
 */
void print_buffer(char buffer[], int *buff_ind)
{
	if (*buff_ind > 0)
		write(1, &buffer[0], *buff_ind);

	*buff_ind = 0;
=======
   unsigned int i = 0, len = 0, ibuf = 0;
   va_list arguments;
   int (*function)(va_list, char *, unsigned int);
   char *buffer;

   va_start(arguments, format), buffer = malloc(sizeof(char) * 1024);
   if (!format || !buffer || (format[i] == '%' && !format[i + 1]))
        return (-1);
    if (!format[i])
        return (0);
    for (i = 0; format && format[i]; i++)
    {
        if (format[i] == '%')
        {
            if (format[i + 1] == '\0')
            {
                print_buf(buffer, ibuf), free(buffer), va_end(arguments);
                return (-1);
            }
            else
            {
                function = get_print_func(format, i + 1);
                if (function == NULL)
                {
                    if (format[i + 1] == ' ' && !format[i + 2])
                        return (-1);
                    handle_buf(buffer, format[i], ibuf), len++, i--;
                }
                else 
                {
                    len += function(arguments, buffer, ibuf);
                    i += ev_print_func(format, i + 1);
                }
            } i++;
        }
        else
            handle_buf(buffer, format[i], ibuf), len++;
        for (ibuf = len; ibuf > 1024; ibuf -= 1024)
                ;
    }
    print_buf(buffer, ibuf), free(buffer), va_end(arguments);
    return (len);
>>>>>>> 88d39a97f38bb57f09b09eb18e34f0a7851a1213
}
