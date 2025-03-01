#include <stdio.h>
/**
 * main - Prints the alphabet in lowercase.
 *
 * Return: Always 0 (success).
 */
int main(void)
{
char la = 'a';
while (la <= 'z')
{
putchar(la);
la++;
}
putchar('\n');
return (0);
}
