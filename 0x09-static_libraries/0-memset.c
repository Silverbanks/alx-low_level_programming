#include "main.h"

/**
  * _memset - Apply the memset function.
  * @s: String
  * @b: Character to replace.
  * @n: Unsigned integer.
  * Return: char.
  */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
