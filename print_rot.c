#include "main.h"

/**
 * print_rot13 - function that encodes a string using rot13
 * @arg_list: list of arguments
 * Return: counter
 */

int print_rot13(va_list arg_list)
{
	int i, j, counter = 0;
	int k = 0;
	char *s = va_arg(arg_list, char*);
	char a[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char b[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	if (s == NULL)
		s = "(null)";
	for (i = 0; s[i] != '\0'; i++)
	{
		k = 0;
		for (j = 0; a[j] && !k; j++)
		{
			if (s[i] == a[j])
			{
				_putchar(b[j]);
				counter++;
				k = 1;
			}
		}
		if (!k)
		{
			_putchar(s[i]);
			counter++;
		}
	}
	return (counter);
}
