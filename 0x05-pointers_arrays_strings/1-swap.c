#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: first int thus int a
 * @b: second int thus int b
 */
void swap_int(int *a, int *b)
{
	int q;

	q = *a;
	*a = *b;
	*b = q;
}
