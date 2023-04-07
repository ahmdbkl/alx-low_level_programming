#include "main.h"

/**
 * _pow_recursion - function that print power of number
 * @x: input number1
 * @y: input number2
 * Return: resulte of the power
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
