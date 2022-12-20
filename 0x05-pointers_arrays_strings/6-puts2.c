#include "main.h"
/**
 * puts2 - function that prints a char out of 2 of a a string
 * @str: char
 * Return: void.
 */
void puts2(char *str)
{
	int i = 0;
	int count = 0;

	while (str[i] != 0)
	{
		count++;
		i++;
	}
	for (i = 0; i <= count - 1 ; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
