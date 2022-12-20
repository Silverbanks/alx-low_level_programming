#include "main.h"
/**
 * _strlen - return the long from a string
 *  @s: pointer
 *  Return: int
 */
int _strlen(char *s)
{
	int i = 0;
	int count = 0;

	while (s[i] != 0)
	{
		count++;
		i++;
	}
	return (count);
}
