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

    //we are assigning va_list argument which is char to myChar
    //before we print it out on the screen

    myChar = va_arg(c, int);
    _putchar(myChar);
    return (1);
}
