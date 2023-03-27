#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "main.h"

int _printf(const char *format, ...)
{
va_list otherArgs;
int (*f)(va_list);
unsigned int i = 0, tobePrinted = 0;

if (format == NULL)
return (-1);
va_start(otherArgs, format);
while (format[i])
{
while (format[i] != '%' && format[i])
{
_putchar(format[i]);
tobePrinted++;
i++;
}
if (format[i] == '\0')
return (tobePrinted);
f = functions(&format[i + 1]);
if (f != NULL)
{
tobePrinted += f(otherArgs);
i += 2;
continue;
}
if (!format[i + 1])
return (-1);
_putchar(format[i]);
tobePrinted++;
if (format[i + 1] == '%')
i += 2;
else
i++;
}
va_end(otherArgs);
return (tobePrinted);
}
