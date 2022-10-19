#include "main.h"
#include <unistd.h>

/**
<<<<<<< HEAD
 * find_function - function that finds formats for _printf
 * calls the corresponding function.
 * @format: format (char, string, int, decimal)
 * Return: NULL or function associated ;
=======
 * find_function - Function that finds formats for _printf
 * calls the corresponding function
 *
 * @format: Format (char, string, int decimal)
 *
 * Return: "NULL" OR function associated
>>>>>>> d6651ce7ca3fca161c42f463fbc45a795cde179f
 */
int (*find_function(const char *format))(va_list)
{
	unsigned int i = 0;
	code_f find_f[] = {
		{"c", print_char},
		{"s", print_string},
		{"i", print_int},
		{"d", print_dec},
		{"r", print_rev},
		{"b", print_bin},
		{"u", print_unsig},
		{"o", print_octal},
<<<<<<< HEAD
		{"x", print_x},
		{"X", print_X},
		{"R", print_rot13},
		{NULL, NULL}
	};

=======
		/*{"x", print_x},
		{"X", print_X},*/
		{"R", print_rot13},
		{NULL, NULL}
	};
>>>>>>> d6651ce7ca3fca161c42f463fbc45a795cde179f
	while (find_f[i].sc)
	{
		if (find_f[i].sc[0] == (*format))
			return (find_f[i].f);
		i++;
	}
	return (NULL);
}
/**
<<<<<<< HEAD
 * _printf - function that produces output according to a format.
 * @format: format (char, string, int, decimal)
 * Return: size the output text;
=======
 * _printf - Function prints produes output according to a format
 *
 * @format: input (char, string, int, decimal)
 *
 * Return: size of the output text
>>>>>>> d6651ce7ca3fca161c42f463fbc45a795cde179f
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
<<<<<<< HEAD
			if (format[i] == '\0')
=======
			return (cprint);
>>>>>>> d6651ce7ca3fca161c42f463fbc45a795cde179f
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
