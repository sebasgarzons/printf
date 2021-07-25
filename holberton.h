#ifndef HOLBERTON_H
#define HOLBERTON_H

/*	PROTOTYPES	*/
#include <stdarg.h>
#include <string.h>
#include <unistd.h>
#include <stdio.h>

/*  STRUCTURES  */
typedef struct func
{
    char *name;
    int (*f)(va_list);
} funct_t;

int _printf(const char *format, ...);
int _printf_literal(const char *format);

int _printf_s(va_list);
int _printf_c(va_list);
int _printf_d(va_list);
int _printf_i(va_list);

int _putchar(char c);
#endif
