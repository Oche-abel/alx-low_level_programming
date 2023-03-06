#include "main.h"

/**
 * _menset - Entry point
 * @s: pointed destination
 * @b: constant byte
 * @n: num of byte
 * Return: 0
*/

char *_memset(char *s, char b, unsigned  int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
