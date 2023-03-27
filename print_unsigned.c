#include <stdio.h>
#include <stdarg.h>
#include "main.h"

int print_unsig(va_list u)
{
    int myUnsignedInt;

    myUnsignedInt = va_arg(u, unsigned int);

    if (!myUnsignedInt)
        return (-1);

    if (myUnsignedInt)
    {
        if (myUnsignedInt >= 10)
        {
            myUnsignedInt = myUnsignedInt / 10;
            _putchar(myUnsignedInt + '0');
            myUnsignedInt = myUnsignedInt % 10;
            _putchar(myUnsignedInt + '0');
            _putchar(' ');
        }
        _putchar(myUnsignedInt + '0');
    }

    return (-1);
}
