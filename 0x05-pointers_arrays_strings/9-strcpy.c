#include "main.h"

/**
 * char *_strcpy - is a function that copies the string pointed to src
 * @dest: copy to
 * @src: copy from
 * Return: string
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (*(src + 1) != '\0')
	{
		i++;
	}
	for ( ; j < 1; j++)
	{
		dest[j] = src[x];
	}
	dest[i] = '\0';
	return (dest);
}
