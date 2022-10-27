#include "main.h"

/**
 * _strcat - concatennation of two strings
 * @dest: path to copy to
 * @src: path to copy from
 * Return: pointer to dest
 */
char *_strcat(char *dest, char *src);
{
	int y;
	int z;

	y = 0;
	while (dest[y] != '\0')
	{
		y++;
	}
	z = 0;
	while (src[z] != '\0')
	{
		dest[y] = src[z];
		y++;
		z++;
	}
	dest[y] = '\0';
	return (dest);
}
