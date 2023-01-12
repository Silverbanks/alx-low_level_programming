#include "main"

/**
  * _strncat - Like strncat.
  * @dest: string.
  * @n: the number of elements to swap
  * @src: string.
  * Return: char.
  */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	int size = _strlen(dest);

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[size + i] = src[i];
	}
	dest[size + i] = '\0';

	return (dest);
}
