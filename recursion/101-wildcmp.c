#include "main.h"
#include <stdio.h>

/**
 * wildcmp - compares two strings with support for wildcards (*)
 * @s1: first string
 * @s2: second string, which may contain wildcard characters
 *
 * Return: 1 if the strings are considered identical, 0 otherwise
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	if (*s2 == '*')
	{
		if (*s1 != '\0' && wildcmp(s1 + 1, s2))
			return (1);
		return (wildcmp(s1, s2 + 1));
	}
	else if (*s1 == *s2)
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}
	return (0);
}
