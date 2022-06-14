#include "main.h"
#include <stdio.h>

/**
 * print_array - this prints `n` elements of an array of integers
 * @a: an array
 * @n: n elements
 * Returns: none.
 */
void print_array(int *a, int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		printf("%d", *(a + i));
		if (i != (n - 1))
			printf(", ");
	}
	printf("\n");
}
