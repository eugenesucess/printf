#include <stdarg.h>
#include <stdio.h>
#include <conio.h>
#include "main.h"

/**
* print_bin - convert to binary
* @b: number in decinal
* Return: number of chars printed
*/
int print_bin(va_list b)
{
	int num = 0, temp = 0, rem;
	bin = va_arg(b, int);
	while (bin!= 0)
	{
		rem = bin % 10;
		bin /= 10;
		num = num+ rem * pow( 2, temp);
		temp++;
	}  
	return (num);
}
