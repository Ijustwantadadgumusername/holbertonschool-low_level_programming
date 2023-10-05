#include "main.h"
/**
 * print_last_digit - take a guess
 * @i: boooooooooo
 * Return: returns 0
 */
int print_last_digit(int i)
{
	int ld = n % 10;

	if (ld < 0)
		ld *= -1;
	_putchar (ld + '0');
	return (ld);
}
