#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <limits.h>


typedef struct format
{
	char *id;
	int (*f)();
} match;

int printf_string(va_list arg_list);
int printf_char(va_list arg_list);
int _strlenc(const char *str);
int _strlen(char *str);
int print_percent(void);
int print_int(va_list arg_list);
int print_dec(va_list arg_list);
int print_rot13(va_list arg_list);
int print_bi(va_list arg);
int print_unsigned(va_list arg);
int _printf(const char *format, ...);
int _putchar(char c);
int print_o(va_list arg);
int print_hex(va_list arg);
int print_HEX(va_list arg);
int print_pointer(va_list arg);
int print_s_string(va_list arg_list);
int print_hex_extra(unsigned long int num);
int print_revs(va_list arg);
int print_HEX_upper(unsigned int num);
#endif
