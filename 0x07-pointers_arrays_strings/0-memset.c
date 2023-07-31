#include "main.h"

/**
 * *_memset - function that fill the memory with a variable
 *
 * @s: input for pointer
 * @b: constant value that will be filled
 * @n: the max bytes for that costant
 *
 * Return: the pointer s
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; n > 0; x++, n--)
	{
		s[x] = b;
	}
	return (s);
}
