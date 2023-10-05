#include "main.h"
/**
 * int _islower(int c) - checks for lowercase
 * Return: 1 if lowercase, 0 if not
 */
_islower
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
