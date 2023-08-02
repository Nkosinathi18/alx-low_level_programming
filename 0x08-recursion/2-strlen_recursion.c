#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: is the string to be measured
 * Return: length of the string
 */

int _strlen_recursion(char *s)
{
	int treez = 0;

	if (*s)
	{
		treez++;
		treez += _strlen_recursion(s + 1);
	}
	return (treez);
}
