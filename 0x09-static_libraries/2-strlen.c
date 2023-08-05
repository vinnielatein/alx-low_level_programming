#include "main.h"

/**
 * _strlen - takes array (string) of characters and give length
 *
 * @s: input parameter string
 *
 * Return: length of string
*/

int _strlen(char *s)
{
	int counter;

	for (counter = 0; *s != '\0'; s++)
		++counter;

	return (counter);
}
