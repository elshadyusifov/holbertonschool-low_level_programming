#include <stdio.h>
/**
 * main - Prints the alphabet in lowercase.
 *
 * Return: Always 0 (success).
 */
int main(void)
{
char la = 'z';
while (la >= 'a')
{
putchar(la);
la--;
}
putchar('\n');
return (0);
}
