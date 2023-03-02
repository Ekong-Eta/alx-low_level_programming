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
	int x;
	int y;

	while (x != '\0')
	{
		x++;
	}

	while (y != '\0')
	{
		*dest[x] = *src[y];
		x++;
		y++;
	}
	dest[x] = '\0';
	return (dest);
}
