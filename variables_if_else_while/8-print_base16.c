#include <stdio.h>

/**
 * main - Prints all the numbers of base 16 in lowercase.
 * Return: Always (0) success
 */
int main(void)
{
char ab = 'a';
char ch = 48;
for (; ch < 58; ch++)
{
putchar(ch);
}
for (; ab <= 'f'; ab++)
{
putchar(ab);
}
putchar('\n');
return (0);
}
