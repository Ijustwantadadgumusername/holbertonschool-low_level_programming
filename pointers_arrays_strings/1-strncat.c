#include "main.h"
/**
 * _strncat - cocatenates 2 strings
 * @dest: destination
 * @src: source
 * @n: limit
 * Return: a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int a = 0;
	int b = 0;

	while (dest[a])
	{
		a++;
	}

	while (b < n && src[b])
	{
		dest[a] = src[b];
		a++;
		b++;
	}

	dest[a + n + 1] = '\0';

	return (dest);
}
