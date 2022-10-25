#include "main.h"

/**
 * puts2 - prints a character out of two
 * @str: input
 * Return: print
 */
void puts2(char *str)
{
	int z = 0;

	for (; str[z] != '\0'; z++)
	{
		if ((z % 2) == 0)
			_putchar(str[z]);
		else
			continue;
	}
	_putchar('\n');
}
