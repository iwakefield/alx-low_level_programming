#include "main.h"

/**
 * clear_bit - sets the index value of a given bit to 0
 * @n: pointer to the bit
 * @index: the index to set the value (indices start at 0)
 *
 * Return: if an error occurs - -1
 *         otherwise - 1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n &= ~(1 << index);

	return (1);
}
