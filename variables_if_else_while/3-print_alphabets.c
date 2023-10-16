#include <stdio.h>

/**
* main - This program
* print the alphabet
* in lowercase then
* in uppercase
* Return: 0
*/
int main(void)
{
char alphabet = 'a';
while (alphabet <= 'z')
{
putchar(alphabet);
alphabet++;
}
putchar('\n');
return (0);
}
