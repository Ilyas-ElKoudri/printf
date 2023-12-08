#include <unistd.h>

/**
 * Il_putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and error is set appropriately.
 */
int Il_putchar(char c)
{
	return (write(1, &c, 1));
}
