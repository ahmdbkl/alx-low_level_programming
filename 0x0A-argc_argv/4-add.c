#include <stdlib.h>
#include <stdio.h>
/**
 * main - program that adds positive numbers.
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i, sum;

	sum = 0;
	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			int a;
			char *str;

			str = argv[i];
			for (a = 0; str[a] != '\0'; a++)
			{
				if (str[a] < 48 || str[a] > 57)
				{
					printf("error\n");
					return (1);
				}
			}
		}
	}
	for (i = 1; i < argc; i++)
	{
	sum = sum + atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
