#include "main.h"
/**
 * _print_rev_recursion - prints a string in reverse
 * @s: said string
 * Return: returns void
 */
void print_rev_recursion(char *s)
{
	if (*s)
	{
		print_rev_recursions(s + 1);
		_putchar(*s);
	}
}
