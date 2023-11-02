#include <stdio.h>

/**
 * main -  a program that prints all arguments it receives
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 SUCCESS
*/
int main(int argc, char *argv[])
{
		for (int i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
