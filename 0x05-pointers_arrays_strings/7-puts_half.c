#include "main.h"

/**
 * puts_half - prints half of a string, folloewd by a new line
 * @str: input
 * Return: half of input
 */

void puts_half(char *str)
{
	int a;
	int n;
	int longi;

	longi = 0;

	for (a = 0; str[a] != '\0'; a++)
		longi++;
	n = (longi / 2);

	if ((longi % 2) == 1)
		n = ((longi + 1) / 2);
	for (a = n; str[a] != '\0'; a++)
		_putchar(str[a]);
	_putchar("\n");
}
