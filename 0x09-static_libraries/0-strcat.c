#include "main.h"
#include <stdio.h>
/**
 * _strcat - concatentes two string
 *
 * @dest: string to append to
 *
 * @src: string to add
 *
 * Return: a pointer to the resaulting string
 *
*/
char *_strcat(char *dest, char *src)
{
	int a, b;

	a = b = 0;

	while (dest[a] != '\0')
		a++;
	while (src[b] != '\0')
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';
	return (dest);
}
