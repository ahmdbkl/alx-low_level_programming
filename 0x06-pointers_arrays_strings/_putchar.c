#include <unistd.h>
/**
 * _putchar - print the character c in stdout
 * @c: the character to print
 * Return: 1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
