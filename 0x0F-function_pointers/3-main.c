#include "3-calc.h"

/**
 * main - program designed to perform simple operations
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: Always 0 (success)
 */

int main(int argc, char *argv[])
{
	int argOne, argTwo, result;
	char o;
	int (*func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	argOne = atoi(argv[1]);
	argTwo = atoi(argv[3]);

	func = get_op_func(argv[2]);

	if (!func)
	{
		printf("Error\n");
		exit(99);
	}

	o = *argv[2];

	if ((o == '/' || o == '%') && argTwo == 0)
	{
		printf("Error\n");
		exit(100);
	}

	result = func(argOne, argTwo);

	printf("%d\n", result);

	return (0);
}
