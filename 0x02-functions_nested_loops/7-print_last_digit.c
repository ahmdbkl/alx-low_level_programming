#include "main.h"
#include <stdio.h>

/**
 * print_last_digit - function to print last digit
 *
 * @i: function parameter
 *
 * Return: always return to k
 */


int print_last_digit(int i)
{
	int k;

	k = i % 10;
	if (k < 0)
		k = -k;
	return (k);
}
