#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 * space
 * Return: on success 1.
 * on error, -1 is returned l, and error is set approoriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
