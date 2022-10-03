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
int a, b, mul;
if (argc <= 2)
{
printf("Error");
return (1);
}
else if (argc == 3)
{
for (i = 1, i < argc; i++)
a = atoi(argv[1]);
b = atoi(argv[2]);
mul = a *b;
printf("%d\n", mul);
return (0);
}
}

