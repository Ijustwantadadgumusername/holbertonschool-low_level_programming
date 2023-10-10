#include "main.h"
/**
 * rev_string - reverses a string
 * @s: - integer used
 * Return: returns void
 */
void rev_string(char *s)
{
	int a, b, c;
	char *d, sux;

	d = s;

	while (s[b] != '\0')
	{
		b++;
	}
	for (c = 1; c < b; c++)
	{
		d++;
	}
	for (a = 0; a < (b / 2); a++)
	{
		sux = s[a];
		s[a] = *d;
		*d = sux;
		d--;
	}
}
