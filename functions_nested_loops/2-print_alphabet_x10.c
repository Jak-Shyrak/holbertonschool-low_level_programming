	#include <stdio.h>
	#include "main.h"


	/**
	* main - This program
	* print the alphabet
	* 10 times
	* in lowercase
	* Return: 0
	*/
	int main()
	{
		int i;
		char a;
		for(i=0; i<10; i++)
		{
			for (a = 97; a <= 122; a++)
				putchar(a);
			putchar('\n');
		}
		return 0;
	}
