#include "main.h"

/**
 * print_revs - function that prints a string in reverse
 * @arg: argument
 * Return: string
 */

int print_revs(va_list arg)
{
	char *s = va_arg(arg, char*);
	int i;
	int j = 0;

	if (s == NULL)
		s = "(null)";
	while (s[j] != '\0')
		j++;
	for (i = j - 1; i >= 0; i--)
		_putchar(s[i]);
	return (j);
}
