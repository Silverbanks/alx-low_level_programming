#include "main.h"
/**
  * _strstr - Write a function that locates a substring.
  * @haystack: String.
  * @needle: Substring.
  * Return: String.
  */
char *_strstr(char *haystack, char *needle)
{
	char *tmp1, *tmp2;

	tmp1 = needle;
	if (*needle == '\0')
	{
		return (haystack);
	}

	while (*haystack != '\0')
	{
		if (*needle != *tmp1)
		{
			continue;
		}

		tmp2 = haystack;

		while (1)
		{
			if (*tmp1 == '\0')
			{
				return (haystack);
			}
			if (*tmp1 + 1 != *tmp2 + 1)
			{
				break;
			}
			tmp1++;
			tmp2++;
		}
		tmp2 = needle;
		haystack += 1;
	}

	return ('\0');
}
