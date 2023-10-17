#include <stdio.h>
/**
 * main - program that prints all arguments it recieves
 * @argc: counts the arguments
 * @argv: where the arrays are
 * Return: returns 0
 */
int main(int argc, int *argv[])
{
	int x = 0;

	for (x = 0, x < argc, x++)
	{
		printf("%s\n", argv[x]);
	}
	return (0);
}				
