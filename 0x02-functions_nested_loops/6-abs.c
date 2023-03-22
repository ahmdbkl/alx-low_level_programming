#include "main.h"

/**
 * _abs - function to check absolute value
 *
 * @a: parameter variables
 *
 * Return: always return a
 */

int _abs(int a)
{
	if (a < 0)
		a = -(a);
	else if (a >= 0)
		a = a;
	return (a);
}
