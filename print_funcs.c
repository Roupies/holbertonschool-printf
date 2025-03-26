#include "main.h"
#include <limits.h>
/**
 * print_char - Function to display a character
 *@args: The list of arguments.
 * Return: The number of characters printed.
 */
int print_char(va_list args)
{
	char c = va_arg(args, int);

	_putchar(c);
	return (1);
}
/**
 * print_string - Function to display a string
 * @args: The list of arguments (a string to print).
 *
 * Return: The number of characters printed
 */
int print_string(va_list args)
{
	int count = 0;
	char *str = va_arg(args, char*);

	if (str == NULL)
		str = "(null)";
	while (*str)
	{
		count += _putchar(*str++);
	}
	return (count);
}
/**
 * print_percentage - Function to display a '%' character
 * @args: A va_list
 *
 * Return: The number of characters printed (1)
 */
int print_percentage(va_list args)
{
	(void)args;
	_putchar('%');
	return (1);
}
/**
 * print_int_dec - Function to display an integer in base 10
 *@args: The list of arguments (the integer to print).
 *
 * Return: The number of characters printed
 */
int print_int_dec(va_list args)
{
	int count = 0;
	int input_number = va_arg(args, int);
	int divisor = 1;

	{
		if (input_number == INT_MIN)
		{
			count += _putchar('-');
			count += _putchar('2');
			input_number = 147483648;
		}
		else if (input_number < 0)
		{
			count += _putchar ('-');
			input_number = -input_number;
		}
	}

	{
		while (input_number / divisor >= 10)
			divisor *= 10;
	}

	{
		while (divisor > 0)
		{
			count += _putchar((input_number / divisor) % 10 + '0');
			divisor /= 10;
		}
	}
	return (count);
}
