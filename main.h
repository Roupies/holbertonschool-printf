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

int print_char(char c);
int print_string(char *str);
int print_percent(void);
int print_integer(int n);

#endif
