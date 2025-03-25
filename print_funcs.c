#include "main.h"
/**
 * print_char - Function to display a character
 *
 * Return: The number of characters printed (always 1)
 */
int print_char(va_list args)
{
        return (_putchar(c));
}
/**
 * print_string - Function to display a string
 * @arg: A va_list
 *
 * Return: The number of characters printed
 */
int print_string(va_list args)
{
	int count = 0;
	
	if (str == NULL)
		str = "(null)";
	while (*str)
	{
		count += _putchar(*str++);
	}
	return (count);
}
