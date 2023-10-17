#include <stdio.h>
#include <stdlib.h>
/**
 * main - programs that multiplies 2 numbers
 * @argc: counts the numbers
 * @argv: where the numbers are
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int x = 0;
	char e[] = "Error";

	if (argc != 3)
	{
		printf("%s\n", e);
		return (1);
	}
	x = atoi(argv[1]) * atoi(argv[2]);
	printf("%i\n", x);
	return (0);
}
