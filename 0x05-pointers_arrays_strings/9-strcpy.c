#include "main.h"

/**
 * char *_strcpy - is a function that copies the string pointed to src
 * @dest: copy to
 * @src: copy from
 * Return: string
 */

char *_strcpy(char *dest, char *src)
{
	int l = 0;
	int j = 0;

	while (*(src + l) != '\0')
	{
		l++;
	}
	for ( ; j < l ; j++)
	{
		dest[j] = src[j];
	}
	dest[l] = '\0';
	return (dest);
}

