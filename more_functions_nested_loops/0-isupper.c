#include <stdio.h>
#include "main.h"

/**
 * _isupper - checks if a character is uppercase.
 * @c: the character to chek
 *
 * Return: 1 if the character is uppercase, 0 otherwise.
 */

int _isupper(int c)
	{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	}
