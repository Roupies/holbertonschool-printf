#include <unistd.h>

/**
 * _putchar - Writes a character to stdout.
 * @c: The character to be written.
 *
 * Return: On success, returns the number of bytes written (1). On error, return -1 and sets errno appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
