#include <stdio.h>

/**
 * main - prints the alphabet lower and upper cases
 * Return: Always (0) success
 */

int main(void)
{
char bh = 'a';
char yh = 'A';
for (; bh <= 'z'; bh++)
{
putchar(bh);
}
for (; yh <= 'Z'; yh++)
{
putchar(yh);
}
putchar('\n');
return (0);
}
