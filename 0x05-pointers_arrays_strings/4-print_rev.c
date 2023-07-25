#include "main.h"

/**
 * print_rev - function that print strings reversed
 *
 * @s: input string to be printed
 *
 * Return: nothing
*/

void print_rev(char *s)
{
	int i = 0;

	while (s[i])
	i++;
	while (i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
