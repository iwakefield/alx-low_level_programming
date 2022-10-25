#include "main.h"

/**
 * rev_string - reverses string
 * @s: input
 * Return: string in reverse
 */
void rev_string(char *s)
{
	char rv = s[0];
	int c = 0;
	int a;

	while (s[c] != '\0')
		c++;
	for (a = 0; a < c; a++)
	{
		c--;
		rv = s[a];
		s[a] = s[c];
		s[c] = rv;
	}
}
