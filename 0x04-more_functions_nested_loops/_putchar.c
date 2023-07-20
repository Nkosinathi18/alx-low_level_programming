#include "main.h"
#include <unistd.h>

/**
 * _putchar - it writes the character c to stdout
 * @c: the character to point
 * Return: 1 (Success)
 * Return: -1 (On error)
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
