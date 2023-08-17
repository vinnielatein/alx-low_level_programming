#include "functions_pointers.h"

/**
 * int_index  - searches for an integer
 * @size: the array size
 * @array: the int array
 * @cmp: the compare function
 * Return: the integer index
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if(array && size && cmp)
		while (i < size)
		{
			if (cmp(array[i]))
				return (i);
			i++;
		}
	return(-1);
}
