#include "main.h"

/**
 * reverse_array - function that reverses arrays
 *
 * @a: input for the array string
 * @n: input for the bytes of string
 *
 * Return: nothing
*/

void reverse_array(int *a, int n)
{
	int i, j, t;

	for (i = 0, j = (n - 1); i < j; i++, J--)
	{
		t = a[i];
		a[i] = a[j];
		a[j] = t;
	}

}
