#include "main.h"

/**
 * _strpbrk - entry point
 * @s: input
 * @accept: input
 * Return: 0
 */

char *_strpbrk(char *s, char *accept)
{
	int j;

	while (*s)
	{
		for (j = 0; accept[j]; j++)
		{
			if (*s == accept[k])
				return (s);
		}
		s++;
	}
	return ('\0');
}
