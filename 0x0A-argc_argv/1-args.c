#include"main.h"
#include <stdio.h>

/**
 * main - A program that prints the number of arguements you passed into it
 * @argc: An argument counter
 * @argv: An argument values
 *
 * Return: int
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		argv = argv;
		printf("%d\n", argc - 1);
	}
	return (0);
}
