#include "main.h"
/**
 * _isalpha - checks for alphabetic characters
 * @c: variable usec
 * Return: 1 if alphabet, 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	return (0);
}
