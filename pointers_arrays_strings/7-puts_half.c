#include "main.h"
/**
 * puts_half - prints half of a string
 * @str: integer used
 * Return: returns void
 */
void puts_half(cahr *str)
{
	int a = 0;
	int b;

	while (str[a] != '\0')
	{
		a++;
	}
	if (a % 2 == 1)
	{
		b = (a - 1) / 2;
		b += 1;
	}
	else
	{
		b = a / 2;
	}
	for (; b < a; b++)
	{
		_putchar(str[b]);
	}
	_putchar('\n');
}
