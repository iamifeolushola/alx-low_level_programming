#include "main.h"
/**
 * _strcmp - this function compares two strings
 * @s1: string one
 * @s2: string two
 * Return: 0, if s1 and s2 are equal, otherwise
 * another number.
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0, cp = 0;

	while (cp == 0)
	{
		if ((*(s1 + i) == '\0') && (*(s2 + i) == '\0'))
			break;
		cp = *(s1 + i) - *(s2 + 1);
		i++;
	}

	return (cp);
}
