#include "function_pointers.h"

/**
 * array_iterator function that executes a function on paramter
 * @size: size of the array
 * @action: function pointer
 * @array: the int array
 * Return: void
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *end = array + size - 1;

	if (array && size && action)
		while (array <= end)
			action(*array++);
}
