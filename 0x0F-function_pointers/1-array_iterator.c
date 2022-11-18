#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - executes function given as a
 * parameter on each element of an array
 * @array: array to iterate over
 * @size: size of array
 * @action: pointer to function used
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int index;

	if (!array || !action)
		return;

	for (index = 0; index < size; index++)
		action(array[index]);
}
