#include "main.h"
#include <stdarg.h>

int print_bin(va_list b)
{
    int decNum, cp;
    decNum = va_arg(b, int);

    if (decNum > 1)
        print_bin(decNum / 2);


    cp = (decNum % 2)? '1':'0';

    return (cp);
}
