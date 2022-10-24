#include "main.h"
/**
 * _isdigit - validates if a character is a digit
 * @c: checks int
 * Return: 1 if c is a digit, 0 otherwise
 */
int _isdigit(int c)
{
	int i = 0;

	if (c >= '0' && c <= '9')
		i = 1;

	return (i);
}
