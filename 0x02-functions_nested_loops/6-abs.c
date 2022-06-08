#include "main.h"
#include <stdio.h>

/**
 * _abs - computes the absolute value of an integer
 * @g: the int to check
 * Return: the absolute value of int
 */
int _abs(int g)
{
	if (g >= 0)
	{
		return (g);
	}
	return (-g);
}
