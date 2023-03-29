#include "main.h"
/**
 * puts2 - function that prints every other character of a string,
 *  starting with the first character
 *  @str: string
 *  Return: 0
 */

void puts2(char *str)
{
	int longi = 0;
	int t = 0;
	int i;
	char *y = str;

	while (*y != '\0')
	{
		longi++;
		y++;
	}
	t = longi - 1;
	for (i = 0; i <= t; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
