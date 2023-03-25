#include "main.h"

/**
 * positive_or_negative - function that print negative or positive number
 * @i: parameter variable
 * Return: always 0
 */

void positive_or_negative(int i)
{
	if (i < 0)
		printf("%d is negative", i);
	else
		printf("%d is positive", i);
}
