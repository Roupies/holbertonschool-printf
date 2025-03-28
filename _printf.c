#include "main.h"
#include <stdarg.h>


/**
 * find_specifier_func - Finds the corresponding function for a specifier.
 * @specifier: The specifier to search for.
 *
 * Return: The corresponding function, or NULL if not found.
 */
int (*find_specifier_func(char specifier))(va_list)
{
	specifier_t specifiers[] =

	{
		{'d', print_int_dec},
		{'i', print_int_dec},
		{'s', print_string},
		{'c', print_char},
		{'%', print_percentage},
		{0, NULL}
	};
	int index = 0;

	while (specifiers[index].specifier != 0)
	{
		if (specifiers[index].specifier == specifier)
			return (specifiers[index].func);
		index++;
	}

	return (NULL);
}

/**
 * print_unknown_specifier - Prints unknown format specifiers.
 * @c: The unknown specifier character.
 *
 * Return: The number of characters printed.
 */
int print_unknown_specifier(char c)
{
	int count = 0;

	_putchar('%');
	count++;

	if (c != '\0') /* Ne pas imprimer si c'est '\0' */
	{
		_putchar(c);
		count++;
	}

	return (count);
}

/**
 * _printf - A custom implementation of printf.
 * @format: A string containing the format specifiers.
 *
 * Return: The total number of characters printed
 * (excluding the null byte used to end output to strings).
 * Writes output to stdout, the standard output stream.
 */
int _printf(const char *format, ...)
{
	int len = 0;
	va_list args;
	const char *cursor;
	int (*specifier_func)(va_list);

	va_start(args, format);

	if (format == NULL)
		return (-1);

	for (cursor = format; *cursor != '\0'; cursor++)
	{
		if (*cursor == '%')
		{
			cursor++;
			if (*cursor == '\0')
			{
				va_end(args);
				return (-1);
			}
			if (*cursor == '\0')
				break;

			specifier_func = find_specifier_func(*cursor);

			if (specifier_func)
				len += specifier_func(args);
			else
				len += print_unknown_specifier(*cursor);
		}
		else
		{
			_putchar(*cursor);
			len++;
		}
	}

	va_end(args);
	return (len);
}
