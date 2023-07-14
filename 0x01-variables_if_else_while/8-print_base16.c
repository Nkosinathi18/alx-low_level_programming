#include <stdio.h>

/**
 * main - Prints numbers between 0 to9 and letters between a and f.
 * Return: 0 (Success)
 */

int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}
	for (i = 97; i < 103; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
