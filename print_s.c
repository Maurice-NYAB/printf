#include "main.h"

/**
 * printf_string - A function that prints a string
 * @arg_list: list of arguments
 * Return: the length of the string
 */

int printf_string(va_list arg_list)
{
	char *str;
	int i;
	int length;

	str = va_arg(arg_list, char *);
	if (str == NULL)
	{
		str = "(null)";
		length = _strlen(str);
		for (i = 0; i < length; i++)
			_putchar(str[i]);
		return (length);
	}
	else
	{
		length = _strlen(str);
		for (i = 0; i < length; i++)
			_putchar(str[i]);
		return (length);
	}
}
