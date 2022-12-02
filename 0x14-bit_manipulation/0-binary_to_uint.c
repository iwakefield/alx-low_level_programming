#include "main.h"

/**
 * binary_to_uint - converts binary number to unsigned int
 * @b: string containing the binary num
 *
 * Return: converted num
 */

unsigned int binary_to_uint(const char *b)
{
	int a;
	unsigned int decVal = 0;

	if (!b)
		return (0);
	for (a = 0; b[a]; a++)
	{
		if (b[a] < '0' || b[a] > '1')
			return (0);
		decVal = 2 * decVal + (b[a] - '0');
	}

	return (decVal);
}
