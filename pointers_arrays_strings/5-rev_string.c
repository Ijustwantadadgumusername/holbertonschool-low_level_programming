#include "main.h"
#include <stdio.h>
/**
 * rev_string - reverses a string
 * @s: - integer used
 * Return: returns void
 */
void rev_string(char *s)
{
	int a;
	int sux;
	char *b;
	char *e = s;

	for (a = 0; s[a] != '\0' && s[a + 1] != '\0'; a++)
	{
		e++;
	}
	sux = a + 1;
	b = s;
	for (a = 0; a < sux / 2; a++)
	{
		char x;

		x = *e;
		*e = *b;
		*b = x;
		b++;
		e--;
	}
	e[sux + 1] = '\0';
}

