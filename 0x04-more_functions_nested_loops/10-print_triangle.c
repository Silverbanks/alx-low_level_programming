#include "main.h"
/**
 * print_triangle - function that prints a piramid
 * @size: type int
 * Return: void
 */
void print_triangle(int size)
{
	int i;
	int j;
	int limit = size;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			limit--;
			for (j = 0; j < size; j++)
			{
				if (j < limit)
				{
					_putchar(32);
				}
				else
				{
					_putchar(35);
				}
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
