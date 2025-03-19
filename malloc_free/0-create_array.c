#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - is main funcsion
 * @size: give your argument
 * @c: give your character
 * _putchar: is on the main file
 * return: 0 always successful
 */

char *create_array(unsigned int size, char c)
{
	if(size == 0)
	{
		return (NULL);
	}
	char *arr = malloc(size * sizeof(char));
		if(arr == NULL)
	{
		return (NULL);
	}
	for(unsigned int i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}
int main()
{
	unsigned int size = 98;
	char c = 'H';
	char *arr = create_array(size, c);
	if(arr == NULL)
	{
		return (1);
	}
	for(unsigned int i = 0; i < size; i++)
	{
		_putchar(arr[i]);
	}
	_putchar('\n');
	free(arr);
	return (0);
}
