#include "main.h"
#include <stdarg.h>
#include <stdio.h>
int print_number(va_list i)
{
    int num = va_arg(i, int);
    int digit, reversed = 0;

    if (num < 0)
    {
        _putchar('-');
        num *= -1;
    }
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
/*
int print_int(va_list i)
{
    int myInt;
    myInt = va_arg(i, int);

    if (myInt == 0)
    {
        _putchar('0');

    }
    if (myInt < 0)
    {
        _putchar('-'); //bring minus sign for negative numbers
        myInt *= -1; //original negative number
    }
    if (myInt < 10)
       _putchar(myInt + '0');

    if (myInt >= 10)
    {
        int out;
        myInt /= 10;
        out = myInt;
        _putchar(out + '0');
        myInt %= 10;
        out += myInt;
        _putchar(out + '0');

    }
    return (myInt);
}
*/
