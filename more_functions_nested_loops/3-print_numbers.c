#include "main.h"
/**
 * print_numbers - prints 0-9 followed by new line
 * Return: returns nothing
 */
void print_numbers(void)
{
int n = 0;
for (n = 0; n <= 9; n++)
{
	_putchar(n + '0');

}
_putchar('\n');
}
