#include <stdio.h>
#include <stdlib.h>
/**
 * main - adds postive numbers
 * @argc: counts the arguments
 * @argv: where the arguments are
 * Return: returns 0 on success, 1 on failure
 */
int main(int argc, char *argv[])
{
	int a;
	int z;
	int sum = 0;

	for (a = 1; a < argc; a++)
	{
		for (z = 0; argv[a][z] != '\0'; z++)
		{
			if (argv[a][z] < '0' || argv[a][z] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[a]);
	}
	printf("%d\n", sum);
	return (0);
}
