#include "main.h"

/**
 * main - multiplies two positive numbers
 * @argc: n arguments
 * @argv: args
 * Return: int
 */
int main(int argc, char *argv[])
{
unsigned long mul;
int d, a;
	if (argc != 3)
	{ printf("Error\n");
	exit(98); }
	for (d = 1; d < argc; d++)
	{
		for (a = 0; argv[d][a] != '\0'; a++)
		{
			if (argv[d][a] > 57 || argv[d][a] < 48)
			{  printf("Error\n");
			exit(98); }
		}

	}
	mul = atol(argv[1]) *  atol(argv[2]);
	printf("%lu\n", mul);
return (0);
}
