#include "main.h"

/**
 * *_strchr - function that finds a desired char
 *
 * @s: input for pointer of variable c
 * @c: desired char
 *
 * Return: the pointer to c
*/

char *_strchr(char *s, char c)
{
	int x;

	for (x = 0; s[x] >= '\0'; x++)
	{
		if (s[x] == c)
		{
			return (s + x);
		}
	}
	return ('\0');
}
