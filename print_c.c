#include "main.h"

/**
 * printf_char - A function that prints a character
 * @arg_list: list of arguments
 * Return: 1
 */

int printf_char(va_list arg_list)
{
	char str;

	str = va_arg(arg_list, int);
	_putchar(str);
	return (1);
}
