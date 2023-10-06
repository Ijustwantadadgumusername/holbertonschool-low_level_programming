#include "main.h"
/**
 * more_numbers - prints 0-14 ten times
 * Return: returns nothing
 */
void more_numbers(void)
{
	char nx10;
	int i = 0;

	while (i <= 9)
	{
		for (nx10 = 0; nx10 <= 14; nx10++)
		{
			if (nx10 > 9)
				_putchar((nx10 / 10) + '0');

			_putchar((nx10 % 10) + '0');
		}
		_putchar('\n');
		i++;
	}
}
