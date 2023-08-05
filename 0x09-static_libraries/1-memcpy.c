#include "main.h"

/**
 * *_memcpy - function that copy memory area
 *
 * @dest: input for pointer
 * @src: constant value that will be copied
 * @n: the max bytes for that costant
 *
 * Return: the pointer dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
	dest[x] = src[x];
	}
	return (dest);
}
