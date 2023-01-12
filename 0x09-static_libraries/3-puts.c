#include "main.h"

/**
  * _puts - Prints a string using _putchar
  * @str: The string to be printed
  */
void _puts(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		_putchar(*(str + i));
		i++;
	}
	_putchar('\n');
}
