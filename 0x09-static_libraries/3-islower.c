#include "main.h"

/**
 * _islower - Chek when a letter is lower.
 *
 * @c: a letter.
 *
 * Return: 1 when is lower and 0 when doesn't.
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
