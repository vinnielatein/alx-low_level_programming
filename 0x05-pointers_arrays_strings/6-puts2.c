#include "main.h"

/**
 * puts2 - function that prints every char in the string
 *
 * @str: input for the string parameter
 *
 * Return: nothing
*/

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; ++i)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}
