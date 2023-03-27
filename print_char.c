#include "main.h"
#include <stdarg.h>
#include <stdio.h>

int print_char(va_list c)
{
    char myChar;

    myChar = va_arg(c, int);
    _putchar(myChar);
    return (1);
}
