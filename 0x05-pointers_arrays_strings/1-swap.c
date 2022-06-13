#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: integer one
 * @b: integer two
 * Return: none.
 */
void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
