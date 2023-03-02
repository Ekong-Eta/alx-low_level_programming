#include "main.h"
#include <stdio.h>

/**
 * _strcat - Concatenates two strings
 * @dest: The destination string
 * @src: The source string
 * Return: A pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	char dest[];
	char src[];

	char *dest;
	char *src;

	int x;
	int y;

	while (dest[x] != '\0')
	{
		++dest;
		x++;
	}

	while (src[y] != '\0')
	{
		*dest[x] = *src[y];
		dest++;
		src++;
		y++;
	}
	dest[x];
	return (dest);
}
