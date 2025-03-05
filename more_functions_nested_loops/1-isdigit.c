#include <stdio.h>
#include "main.h"

/**
 * _isdigit - checks for a digit (0 through 9).
 * @c: the character to chek
 *
 * Return: 1 if the character is digits, 0 otherwise.
 */

int _isdigit(int c)
{
	if (c<=9 && c>=0)
	{
	return (1);
	}
	else
	return (0);
}
