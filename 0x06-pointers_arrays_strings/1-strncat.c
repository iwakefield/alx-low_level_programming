#include "main.h"

/**
 * _strncat - joins two strings n bytes
 * @n: number of char to be copied
 * @dest: path to copy to
 * @src: path to copy from
 * Return: pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int y;
	int z;

	y = 0;
	while (dest[y] != '\0')
	{
		y++;
	}
	z = 0;
	while (z < n && src[z] != '\0')
	{
		dest[y] = src[z];
		y++;
		z++;
	}
	dest[y] = '\0';
	return (dest);
}
