#include "main.h"
/**
 * _isdigit - checks for digit
 * @c: what it'll check
 * Return: returns 1 if digt, 0 if not
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
