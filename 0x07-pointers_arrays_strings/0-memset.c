#include "main.h"

/**
 * _memset - this fills memory with a constant byte
 * @s: memory area
 * @b: constant byte
 * @n: filled bytes
 * Return: the pointer to dest
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(s + i) =  b;

	return (s);
}
