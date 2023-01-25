#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * main - check the code for Holberton School students.
 * @argv: value arguments
 * @argc: count arguments
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	int n1 = 0;
	int n2 = 0;
	int r = 0;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	n1 = atoi(argv[1]);
	n2 = atoi(argv[3]);

	if (n2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	r = (*get_op_func(argv[2]))(n1, n2);
	printf("%d\n", r);
	return (0);
}
