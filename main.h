#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

int _printf(const char *format, ...);
int _putchar(char c);

typedef struct specifier
{
	char spec;
	int (*f)(va_list);
}
specifier_t;

int handle_format(const char *format, va_list args);

#endif
