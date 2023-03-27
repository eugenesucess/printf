#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>

typedef struct modify
{
	char *modifier;
	int (*f)(va_list);
} eachModifier;

/*prototypes*/
int _putchar(char c);
int _printf(const char *format, ...);

/*Conversion specifiers*/
int print_char(va_list c);
int print_string(va_list s);
int print_mod(va_list mod);

#endif
