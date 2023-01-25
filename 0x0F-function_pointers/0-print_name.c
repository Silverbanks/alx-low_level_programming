#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_name - function that print a string
 * @name: pointer char
 * @f: function pointer
 * Return: void
*/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
