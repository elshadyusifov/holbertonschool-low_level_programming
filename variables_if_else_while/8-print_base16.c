#include <stdio.h>

/**
* main - prints all the numbers of base 16 in lowercase
* return: always success (0)
*/

int mani(void)
{
char ch = 48;
for (; ch < 58; ch++)
{
putchar(ch);
}
char ab = 'a';
for (; ab <= 'f'; ab++)
{
putchar(ab);
}
putchar('\n');
return 0;
}
