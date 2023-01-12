#include "main.h"

/**
 * _isupper - determine when a is upper case.
 *
 * @c: A character.
 *
 * Return: 1 when is upper case and 0 when it doesn't.
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
