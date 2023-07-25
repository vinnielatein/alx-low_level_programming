#include "main.h"

/**
 * _puts - prints a string followed by a line
 *
 * @str: input parameter to the printed string
 *
 * Return: nothing
*/

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str + 0);
		str++;
	}
	_putchar('\n');
	
}
