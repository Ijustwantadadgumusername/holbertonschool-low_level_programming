#include "main.h"

/**
 * print_alphabet_x10 - take a guess
 * Return: void
 */

void print_alphabet_x10(void)
{
	char alphabetx10;
	int i = 0;

	while (i <= 9)
	{

	for (alphabetx10 = 'a'; alphabetx10 <= 'z'; alphabetx10++)
	{
		_putchar(alphabetx10);
	}
	_putchar('\n');
	i++;
	}
}

