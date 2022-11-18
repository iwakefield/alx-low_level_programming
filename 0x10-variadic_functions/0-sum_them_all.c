#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - returns sum of all its parameters
 * @n: number of arguments
 * Return: sum of its arguments
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list vaList;
	unsigned int i;
	int sum = 0;

	if (n == 0)
		return (0);

	va_start(vaList, n);

	for (i = 0; i < n; i++)
		sum += va_arg(vaList, int);

	va_end(vaList);

	return (sum);
}
