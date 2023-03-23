#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - Prints a name
 * @name: the name to print
 * @f: pointer to the function
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}