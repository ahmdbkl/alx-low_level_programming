#include "main.h"

/**
 * _islower - function for cheking lowercase
 *
 * @c: parameter accounter
 *
 * Return: 1 if it is lowercase
 * and 0 otherwise
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
