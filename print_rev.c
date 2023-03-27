#include <stdarg.h>
#include <stdlib.h>
#include "main.h"


int print_rev(va_list r)
{
    char *str;
    int len = 0, j, print = 0;

    str = va_arg(r, char *);
    if (str == NULL)
        str = ")llun(";

    while(str[len])
    {
        len++;
    }

	for (len -= 1 ; len >= 0; len--)
    {
        _putchar(str[len]);
        print++;
    }
    return (print);
}
