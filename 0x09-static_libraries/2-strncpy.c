#include "main.h"

/**
 * *_strncpy - function that copies string
 *
 * @src: input for source
 * @dest: input for destination
 * @n: input for dest bytes
 *
 * Return: destination
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
