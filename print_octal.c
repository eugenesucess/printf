#include "main.h"
#include <stdarg.h>

int print_octal(va_list o)
{
    int octNum;

    octNum = va_arg(o, int);

    if (octNum > 7)
        print_octal(octNum/ 8);
    _putchar((octNum % 8) + '0');

    return (1);
}
