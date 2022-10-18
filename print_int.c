#include "main.h"

/**
 * print_int - Function prints an integer with _putchar
 * 
 * @i: integer to print
 * 
 *  Return: size of the output text
 */
int print_int(va_list i) 
{
    int len, powten, j, digit, n, count = 0, num;

    n = va_arg(i, int);
    if (n != 0)
    {
        if (n < 0)
        {
            _putchar('-');
            count++;
        }
        num = n;
        len = 0;
        while (num != 0)
        {
            num /= 10;
            len++;
        }
        powten = 1;
        for (j = 1; j <= len -1; j++)
        powten *= 10;
        for (j = 1; j<= len; j++)
        {
            digit = n / powten;
            if (n < 0)
                _putchar((digit * -1) + 48);
            else
                _putchar(digit + '0');
            count++;
            n-= digit * powten;
            powten /= 10;
        }
    }
    else 
    {
        _putchar('0');
        return (1);
    }
    return (count);
}
