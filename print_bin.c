#include <stdarg.h>
#include <stdio.h>
#include "main.h"

/**
* print_bin - this function convert to binary
* @b: number in decinal
* Return: number of chars printed
*/
int print_bin(va_list b)
{
	unsigned int len, powten, j, digit, x, num;
	int count = 0;

	x = va_arg(b, unsigned int);
	if (x != 0)
	{
		num = x;
		len = 0;
		while (num != 0)
		{
			num /= 2;
			len++;
		}
		powten = 1;
		for (j = 1; j <= len - 1; j++)
			powten *= 2;
		for (j = 1; j <= len; j++)
		{
			digit = x / powten;
			_putchar(digit + '0');
			count++;
			x -= digit * powten;
			powten /= 2;
		}
	}
	else
	{
		_putchar('0');
		return (1);
	}
	return (count);
}
