#include "main.h"
/**
* _strcmp - function that compares two strings
* @s1: char pointer
* @s2: char pointer
*
* Return: int
*/
int _strcmp(char *s1, char *s2)
{
	int n = 0;
	int i;

	for (i = 0; (s1[i] != '\0' && s2[i] != '\0'); i++)
	{
		if (s1[i] != s2[i])
		{
			n = s1[i] - s2[i];
			break;
		}
	}
	return (n);
}
