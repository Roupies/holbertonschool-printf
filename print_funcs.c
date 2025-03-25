#include "main.h"
/**
 * print_char - Function to display a character
 *
 * Return: The number of characters printed (always 1)
 */
int print_char(va_list args)
{
	char c = va_arg(args, int);
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
 * @args: A va_list (not used)
 *
 * Return: The number of characters printed (1)
 */
int print_percentage(va_list args)
{
	(void)args;
	_putchar('%');
	return(1);
}
/**
 * print_int_dec - Function to display an integer in base 10
 * @n: The integer to be printed
 *
 * Return: The number of characters printed
 */
int print_int_dec(va_list args)
{
	int count = 0;
	int n = va_arg(args, int);
	unsigned int num;
	
	if (n < 0)
	{
		count += _putchar('-');
		num = -n;
	}
	else
	{
		num = n;
	}
	
	int divisor = 1;

	while (num / divisor >= 10)
		divisor *= 10;

	for (; divisor > 0; divisor /= 10)
	{
		count += _putchar((num / divisor) + '0');
		num %= divisor;
	}
}
