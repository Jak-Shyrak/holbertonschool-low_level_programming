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
    char a;

    for (a = 97; a <= 122; a+)
        putchar(a);
    for (a = 65; a <= 90; a+)
        putchar(a);
    putchar('\n');
    return (0);
}
