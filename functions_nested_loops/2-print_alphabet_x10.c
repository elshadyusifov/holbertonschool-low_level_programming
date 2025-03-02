#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase
 * Description: void print_alphabet_x10
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
int i = 0;
for (; i < 10 ; i++)
{
char c = 'a';
for (; c <= 'z' ; c++)
{
_putchar(c);
}
_putchar('\n');
}
}
