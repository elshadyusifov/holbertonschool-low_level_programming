#include <stdio.h>

/**
 * main - alphabet ecxept q and e
 * Return: always (0) success
 */

int main(void)
{
char abc = 'a';
for (; abc <= 'z'; abc++)
{
{
if (abc == 'q' || abc == 'e')
continue;
}
putchar(abc);
}
putchar('\n');
return (0);
}
