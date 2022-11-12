#include "main.h"

/**
 * _strncpy - copies a string with n
 * @n: number of char to be copied
 * @dest: path to copy to
 * @src: path to copy from
 * Return: pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int a;

	a = 0;
	while (a < n && src[a] != '\0')
	{
		dest[a] = src[a];
		a++;
	}
	while (a < n)
	{
		dest[a] = '\0';
		a++;
	}
	return (dest);
}
