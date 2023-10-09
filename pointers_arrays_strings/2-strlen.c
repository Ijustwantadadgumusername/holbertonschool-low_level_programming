#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * _strlen - string length
 * @s: integer used
 * Return: return value
 */
int _strlen(char *s)
{
	int l = 0;

	while (*s != '\0')
	{
		l++;
		s++;
	}
	return (l);

}
