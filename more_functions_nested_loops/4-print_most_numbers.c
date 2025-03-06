#include "main.h"
#include <stdio.h>

/**
 * print_most_numbers - Prints the numbers from 0 to 9 followed by a new line.
 *
 * Description: This function prints all the numbers from 0 to 9 and
 * then prints a new line.
 */

void print_most_numbers(void)
{
char numbers[] = "0123456789";
int i = 0;
while (numbers[i] != '\0')
if (numbers[3] != 2 && numbers[5] != 4)
_putchar(numbers[i]);
i++;
_putchar('\n');
}
