#include "main.h"

/**
 * reverse_array - reverses an array of integers
 * @a: array
 * @n: the number of elements of the array
 * Return: rev
 */
void reverse_array(int *a, int n)
{
	int y;
	int z;

	for (y = 0; y < n; y++)
	{
		n--;
		z = a[y];
		a[y] = a[n];
		a[n] = z;
	}
}
