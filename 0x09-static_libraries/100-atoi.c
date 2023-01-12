#include "main.h"
/**
 * _atoi - Change a string to a integer.
 * @s: String.
 * Return: Integer into the string.
 */
int _atoi(char *s)
{
	int i = 0, flag = 0, num = 1;
	unsigned int potencia = 1, suma = 0;

	while (s[i])
	{
		if ((s[i] == '-' || s[i] == '+') && flag == 0)
		{
			if (s[i] == '-')
			{
				num *= -1;
			}
			else
			{
				num *= 1;
			}
		}
		else if (s[i] >= '0' && s[i] <= '9')
		{
			flag = 1;
		}
		else if (flag)
		{
			break;
		}

		i++;
	}

	i--;
	while (s[i] >= '0' && s[i] <= '9')
	{
		suma += (s[i] - '0') * potencia;
		potencia *= 10;
		i--;
	}

	return (suma * num);
}
