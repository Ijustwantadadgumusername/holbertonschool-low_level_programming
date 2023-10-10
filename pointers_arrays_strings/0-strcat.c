#include "main.h"
#include <stdio.h>
/**
 * _strcat - concatenates 2 strings
 * @dest: destination
 * @src: source
 * Return : a pointer to the resulting srting destination
 */
char *_strcat(char *dest, char *src)
{
	int a = 0, i;

	while (dest[a])
	{
		a++;
	}

	for (i = 0; src[i] != 0; i++)
	{
		dest[a] = src[i];
		a++;
	}

	dest[a] = '\0';
	return (dest);
}
