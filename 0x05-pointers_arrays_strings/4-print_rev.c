#include "main.h"
/**
 * print_rev -  prints a string in reverse
 * @s: char
 * Return: void.
 */
void print_rev(char *s)
{
	int count = 0;
	int i = 0;
	int j;

	while (s[i] != 0)
	{
		count++;
		i++;
	}
	for (j = count - 1; j >= 0; j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}
