#include "main.h"

/**
 * _print_rev_recursion - this prints a string in reverse.
 * @s: a string
 * Return: none.
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
