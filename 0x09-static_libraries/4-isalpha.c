#include "main.h"
/**
 * _isalpha - determine when a is in alphabet.
 *
 * @c: A character..
 *
 * Return: 1 when is in the alphabet and 0 when it doesn't..
 */
int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
