#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdarg.h> /*  Variadic Function   */
#include <unistd.h> /*  Write() */

/*  PROTOTYPES  */

/*  MAIN FUNCTION  */
int _printf(const char *format, ...);

/*  EDGE CASES*/
int edge_cases(const char *format, va_list);

/*  SUBFUNCTIONS  */
int _printf_s(va_list);
int _printf_c(va_list);
int _printf_d(va_list);
int _printf_i(va_list);
int _printf_per(va_list);
int _printf_bin(va_list);
int _printf_o(va_list);
int _printf_x(va_list);
int _printf_u(va_list);

/*  AUX FUNCTIONS */
int _putchar(char c);
int _strlen(char *s);
char *_itoa(int i, char *strout, int base);
char *_strncpy(char *dest, char *src, int n);

/*  STRUCTURES  */

/**
 * struct func - function structure
 * @name: character match with % in printf
 * @f: function match with % in printf
 */

typedef struct func
{
	char *name;
	int (*f)(va_list);
} funct_t;

static const funct_t types[] = {
	{"s", _printf_s},
	{"c", _printf_c},
	{"d", _printf_d},
	{"i", _printf_i},
	{"%", _printf_per},
	{"b", _printf_bin},
	{"o", _printf_o},
	{"x", _printf_x},
	{"u", _printf_u}};

#endif
