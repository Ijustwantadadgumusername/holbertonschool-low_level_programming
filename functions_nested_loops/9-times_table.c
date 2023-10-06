#include "main.h"
/**
 * times_table - prints the times table
 * Return: returns 0
 */
void times_table(void);
{
	int n, t, e;

	for (n = 0; n <= 9; n++)
	{
		_putchar('0');
		for (t = 1; t <= 9; t++)
		{
			_putchar(',');
			_putchar(' ');
			e = n * t;
			if (result <= 9)
				_putchar(' ');
			else
				_putchar((e / 10) + '0');
				_putchar((e % 10) + '0');
		}
		_putchar ('\n');
	}
}
