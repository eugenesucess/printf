#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int print_string(va_list s)
{
    unsigned int i = 0;
    char *myString;
    myString = va_arg(s, char *);

    if (myString == NULL)
        myString = "(null)";

    while(myString[i])
    {
        _putchar(myString[i]);
        i++;
    }
    return (i);
}

/*
unsigned int i;
int count_fun = 0;

for (i = 0; myString; myString[i] != 0; i++)
{
    count_fun += _putchar(myString[i]);
}
*/
