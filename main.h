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
int _printf(const char *format, ...);
int _putchar(char c);

#endif
