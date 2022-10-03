#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints the multiplication of two integers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 if true, 1 if false
 */
int main(int argc, char *argv[])
{
	int i;
	int a, b;

	for (argc <= 2)
	{
		printf("Error");
		return (1);
	}
	else
		for (i = 1, i < argc; i++)
		{
			a = atoi(argv[1]);
			b = atoi(argv[2]);
			printf("%d\n", a * b)
				return (0);
		}
}
