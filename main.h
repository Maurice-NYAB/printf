#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <string.h>

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

#endif
