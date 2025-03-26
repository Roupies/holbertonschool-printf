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
