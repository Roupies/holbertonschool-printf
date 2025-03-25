#ifndef MAIN.H
#define MAIN.H

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

int _printf(const char *format, ...);

typedef struct specifier
{
	char spec;
	int (*f)(va_list);
}
specifier_t;

int handle_format(const char *format, va_list args);

#endif
