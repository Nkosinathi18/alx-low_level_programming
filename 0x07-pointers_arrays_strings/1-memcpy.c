#include "main.h"

/**
 * _memcpy - is a function that copies memory area
 * @dest: memory where is stored
 * @src: memory where is copied
 * @n: number of bytes
 * Return: copied memory
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;
	int j = n;

	for (; i < j; r++)
	{
		dest[i] = src[i];
		n--;
	}
	return (dest);
}
