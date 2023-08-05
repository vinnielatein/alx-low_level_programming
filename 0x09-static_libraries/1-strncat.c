#include "main.h"

/**
 * *_strncat - function that will concatinate two strings
 *
 * @src: input for source
 * @dest: input for destination
 * @n: input for string number
 *
 * Return: pointer to destination
*/

char *_strncat(char *dest, char *src, int n)
{
	int c, i;

	c = 0;
	while (dest[c])
		c++;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[c + i] = src[i];

	dest[c + i] = '\0';

	return (dest);
}
