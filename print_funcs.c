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
/**
 * print_percentage - Function to display a '%' character
 * @args: A va_list (not used)
 *
 * Return: The number of characters printed (1)
 */
int print_percentage(va_list args)
{
	(void)arg;
	_putchar('%');
	return(1);
}
#include "main.h"
/**
 * print_int_dec - Function to display an integer in base 10
 * @n: The integer to be printed
 *
 * Return: The number of characters printed
 */
int print_int_dec(va_list args)
{
	int count = 0;
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
	if (num / 10)
		count += print_int_dec(num / 10);
	count += _putchar((num % 10) + '0');
	return (count);
}
