#include "main.h"
#include <stdarg.h>
#include <stdio.h>

/**
* print_char -> print char
* @c: char to be printed
* Return: 1
*/

int print_char(va_list c)
{
    char myChar;

    myChar = va_arg(c, int);
    _putchar(myChar);
    return (1);
}
