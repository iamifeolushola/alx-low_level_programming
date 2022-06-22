#include "main.h"

/**
 * _strchr - this locates a character in a string
 * @s: a string
 * @c: a character
 * Return: the pointer to the first occurrence of `c`.
 */
char *_strchr(char *s, char c)
{
	unsigned int i = 0;

	for (; *(s + i) != '\0'; i++)
		if (*(s + i) == c)
			return (s + i);
	if (*(s + i) == c)
		return (s + i);
	return ('\0');
}
