#include "main.h"

/**
 * reverse_array - function that reverses arrays
 *
 * @a: input for the array string
 * @n: input for the bytes of string
 *
 * Return: reversed array
*/

void reverse_array(int *a, int n)
{
	int b, j, y;

	for (b = 0, j = (n - 1); b < j; b++, J--)
	{
		y = a[b];
		a[b] = a[j];
		a[j] = y;
	}

}
