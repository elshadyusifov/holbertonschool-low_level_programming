#include <stdlib.h>
#include "main.h"

/**
 * create_array - main funsiyasini bildirir
 * @size: size of massive
 * @c: give your character
 * Return: Array (success),
 * otherwise is NULL
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	arr = (char *)malloc(size * sizeof(char));
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
