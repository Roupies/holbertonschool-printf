#include "main.h"
/**
 * print_char - Fonction pour afficher un caractère
 * @c: le caractère à afficher 
 *
 * Retour: Le nombre de caractère imprimés (ici, toujours 1)
 */
int print_char(va_list args)
{
	return (_putchar(c));
}
/**
 * print_string - Fonction pour afficher une chaine de caractères
 * @str: La chaine de caractère à afficher
 *
 * Retour: Le nombre de caractères imprimés
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
 * print_percentage - Handles the %% format specifier.
 * @args: A va_list (not used).
 *
 * Return: The number of characters printed (1).
 */
int print_percentage(va_list args)
{
	(void)args;
	_putchar('%');
	return (1);
}
