#include "main.h"
/**
 * _atoi - converts a string to an integer
 * @s: integer used
 * Return: an integer
 */
int _atoi(char *s)
{
	int a = 0;
	unsigned int nit = 0;
	int yen = 1;
	int yang = 0;

	while (s[a])
	{
		if (s[a] == 45)
		{
			yen *= -1;
		}
		while (s[a] >= 48 && s[a] <= 57)
		{
			yang = 1;
			nit = (nit * 10) + (s[a] - '0');
			a++;
		}
		if (yang == 1)
		{
			break;
		}
		a++;
	}
	nit *= yen;
	return (nit);
}
