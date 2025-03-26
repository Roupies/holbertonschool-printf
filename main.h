#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * struct specifier_s - struct linking a format specifier to its function
 * @specifier: The format specifier character (e.g., 'd', 's', 'c')
 * @func: Pointer to the corresponding handler function
 *
 * Description: This structure is used to map format specifiers
 * to their respective handling functions in the _printf implementation.
 */
typedef struct specifier_s
{
	char specifier;
	int (*func)(va_list);
} specifier_t;

int _putchar(char c);

int print_int_dec(va_list args);
int print_string(va_list args);
int print_char(va_list args);
int print_percentage(va_list args);

int _printf(const char *format, ...);


#endif
