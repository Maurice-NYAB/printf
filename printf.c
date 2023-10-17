#include "main.h"
/**
 * _printf - a function that produces output according to a format
 * @format: character string
 * Return:  the number of characters printed
 */

int _printf(const char *format, ...)
{
	int prnt_char = 0;
	va_list arg_list;

	if (format == NULL)
		return (-1);

	va_start(arg_list, format);

	while (*format)
	{
		if (*format != '%')
		{
			write(1, format, 1);
			prnt_char++;
		}
		else
		{
			format++;
			if (*format == '\0')
				break;
			if (*format == '%')
			{
				write(1, format, 1);
				prnt_char++;
			}
			else if (*format == 'c')
			{
				char c = va_arg(arg_list, int);
				write(1, &c, 1);
				prnt_char++;
			}
			else if (*format == 's')
			{
				char *str = va_arg(arg_list, char*);
				int str_len = 0;

				while (str[str_len] != '\0')
					str_len++;
				write(1, str, str_len);
				prnt_char += str_len;
			}
		}
		format++;
	}
	va_end(arg_list);
	return (prnt_char);
}
