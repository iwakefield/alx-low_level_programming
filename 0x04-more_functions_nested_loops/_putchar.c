#include "main.h"
#include "unistd.h"

/*
 * _putchar - Entry of character c to stdout
 * @c: the character to be printed
 *
 * Return: 1 (Success)
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
