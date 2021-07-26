#ifndef HOLBERTON_H
#define HOLBERTON_H

/*	PROTOTYPES	*/
#include <stdarg.h> /*  Variadic Function   */
#include <unistd.h> /*  Write() */
#include <stdlib.h> /*  Exit() */

/*  STRUCTURES  */
typedef struct func
{
	char *name;
	int (*f)(va_list);
} funct_t;

int _printf(const char *format, ...);

int _printf_s(va_list);
int _printf_c(va_list);
int _printf_d(va_list);
int _printf_i(va_list);
int _printf_per(va_list);
int _printf_bin(va_list);
int _printf_o(va_list);

int _putchar(char c);
int _strlen(char *s);
char *_itoa(int i, char *strout, int base);
char *_strncpy(char *dest, char *src, int n);
#endif
