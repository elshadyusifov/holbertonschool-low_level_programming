#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - prints the alphabet, in lowercase, followed by a new line
 * Return: (0) always success
 */

void print_alphabet(void)
{
char ch;
for (ch = 'a'; ch <= 'z' ; ch++)
{
_putchar(ch);
}
_putchar('\n');
}
