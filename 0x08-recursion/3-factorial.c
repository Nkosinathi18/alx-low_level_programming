#include "main.h"

/**
 * factorial - will return a factorial number
 * @n: is the number to return the factorial from
 * Return: (factorial)n
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
