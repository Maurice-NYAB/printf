#include "main.h"

/**
 * print_bi - converts unsigned int to binary
 * @arg: argument
 * Return: integer
 */

int print_bi(va_list arg)
{
	int count1 = 0;
	int count2 = 0;
	int i, a = 1, b;
	unsigned int num = arg_list(arg, unsigned int);
	unsigned int p;

	for (i = 0; i < 32; i++)
	{
		p = ((a << (32 - i)) & num);
		if (p >> (31 - i))
			count1 = 1;
		if (count1)
		{
			b = p >> (31 - i);
			_putchar(b + 48);
			count2++;
		}
	}
	if (count2 == 0)
	{
		count2++;
		_putchar('0')   :
	}
	return (count2);
}
