#include <unistd.h>

/**
 * _putchar - Writes a character to stdout.
 * @c: The character to be written.
 *
 * Return: On success, returns (1). On error, return -1.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
