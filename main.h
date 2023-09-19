#ifndef MAIN_H
#define MAIN_H
#include <limits.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int _printf(const char *format, ...);
int print_char(int c);
int print_digit(long n, int base);
int print_str(char *s);
int print_format(char specifier, va_list ap);
#endif 
