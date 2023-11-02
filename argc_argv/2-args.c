#include <stdio.h>
#include <stdlib.h>

/**
 * main -  a program that prints all arguments it receives
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 SUCCESS
*/
int main(int argc, char **argv)
{
	int count;

	for (count = 0; count < argc; count++)
	{
		printf("%s\n", argv[count]);
	}

	return (0);
}
