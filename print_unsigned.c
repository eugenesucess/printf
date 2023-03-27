#include <stdio.h>
#include <stdarg.h>
#include "main.h"

int print_unsig(va_list u)
{
    int num, digit, reversed = 0;

    num = va_arg(u, unsigned int);

    if (!num)
        return (-1);
    while (num != 0)
    {
        digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }

    while (reversed != 0)
    {
        digit = reversed % 10;
        _putchar(digit + '0');
        reversed /= 10;
    }
    return (num);
}
