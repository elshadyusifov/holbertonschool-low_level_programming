#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - prints the alphabet, in lowercase, followed by a new line
 * Return: (0) always success
 */

void print_alphabet(void)
{
int ch;
for (ch = 'a'; ch <= 'z' ; ch++)
{
putchar(ch);
}
putchar('\n');
}
