#include "main.h"

/**
 * _strpbrk - This searches a string for any of a set of bytes.
 * @s: string one
 * @accept: string two
 * Return: a pointer to the byte in `s` that matches one of the
 * bytes in accept, or `NULL` if no such byte is found.
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
				return (s + i);
		}
	}
	return ('\0');
}
