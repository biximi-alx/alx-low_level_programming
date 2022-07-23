#include <stdio.h>
#include <stdlib.h>

/**
 * main - a function that returns its file name
 * @argc: argc parameter
 * @argv: an array of a command listed
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int result, num1, num2;

	if (argc != 3)
	{
		printf("%s\n", "Error");
		return (1);
	}
	num1 = atoi(argc[1]);
	num2 = atoi(argv[2]);
	result = num1 * num2;

	printf("%d\n", result);
	return (0);
}
