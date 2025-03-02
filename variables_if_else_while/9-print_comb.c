#include <stdio.h>
/**
 * main - Numbers must be separated by "," followed by a space
 * Return: Always (0) success
 */
int main(void)
{
int x = 48;
for (; x < 58; x++)
{
putchar(x);
if (x < 57)
{
putchar(44);
putchar(32);
}
}
putchar('\n');
return (0);
}
