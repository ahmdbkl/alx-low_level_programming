#include "main.h"
/**
 * print_rev -  function that prints a string,in reverse,
 * followed by a new line
 *@s: function parameter
 * Return: 0
 */

void print_rev(char *s)
{
	int i;
	int count = 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}
	s--;
	for (i = count ; i > 0 ; i--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
