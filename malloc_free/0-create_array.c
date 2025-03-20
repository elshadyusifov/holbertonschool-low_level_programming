#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - main funsiyasini bildirir
 * @size: add your sizeof
 * @c: give your character
 * Return: (arr) is true,
 * otherwise is NULL
 */

char *create_array(unsigned int size, char c)
{
	if (size == 0)
	{
		return (NULL);
	}
	char *arr = (char *)malloc(size * sizeof(char));
		if (arr == NULL)
	{
		return (NULL);
	}
	for (unsigned int i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}

/**
 * main - starting point of program
 * Return: always (0) successful
 */

int main(void)
{
	unsigned int size = 98;
	char c = 'H';
	char *arr = create_array(size, c);

	if (arr == NULL)
	{
		return (1);
	}
	for (unsigned int i = 0; i < size; i++)
	{
		_putchar(arr[i]);
	}
	_putchar('\n');
	free(arr);
	return (0);
}
