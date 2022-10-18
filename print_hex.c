#include "main.h"

/**
 * print_hex - Function that prints an unsigned in in hexadecimal
 * 
 * @n: unsigned int to be printed
 * @c: case of printiny (0 = lower, 1 = upper)
 * 
 * Return: size of the output
 */
int print_hex(unsigned int n, unsigned int c)
{
    unsigned int len, powten, j, digit, num;
    int count = 0;
    char diff;

    if (n != 0)
    {
        num = n;
        len = 0;
        if (c)
            diff = 'A' - ':';
        else 
            diff = 'a' - ':';
        while (num != 0)
        {
            num /= 16;
            len++;
        }
        powten = 1;
        for (j = 1; <= len - 1; j++)
            powten *= 16;
            for (j = 1; <= len; j++)
            {
                digit = n / powten;
                if (digit < 10)
                    _putchar(digit + '0');
                else
                    _putchar(digit + '0' + diff);
                count++;
                n -= digit * powten;
                powten /= 16;
            }
    }
    else 
    {
        _putchar('0');
        return (1);
    }
    return (count);
}