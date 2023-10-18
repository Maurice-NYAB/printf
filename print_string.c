#include "main.h"

/**
 * print_s_string - a function that prints non printable characters
 * @arg_list: argument
 * Return: number of characters printed
 */

int print_s_string(va_list arg_list)
{
	char *s;
	int i, len = 0;
	int value;

	s = va_arg(arg_list, char *);
	if (s == NULL)
		s = "(null)";
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] < 32 || s[i] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			len = len + 2;
			value = s[i];
			if (value < 16)
			{
				_putchar('0');
				len++;
			}
			len = len + print_HEX_upper(value);
		}
		else
		{
			_putchar(s[i]);
			len++;
		}
	}
	return (len);
}
