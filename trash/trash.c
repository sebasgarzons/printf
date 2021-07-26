#include "holberton.h"
#include <stdlib.h>
/**
 * _printf - asd
 * @format: asd
 * Return: the number of characters printed
 */

int _printf(const char *format, ...)
{
	va_list ap;

	funct_t types[] = {
		{"s", _printf_s},
		{"c", _printf_c},
		{"d", _printf_d},
		{"i", _printf_i},
		{"%", _printf_per}};

	int i = 0, j = 0, ptchar = 0, fn = 0, rtn = 0;

	va_start(ap, format);

	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			for (j = 0; j <= 4; j++)
			{
				if (format[i] == *(types[j].name))
					fn += types[j].f(ap);
			}
			// if (format[i + 1] == '\0' && format[i - 1] == *(types[j].name))
			// 	break;
			i++;
		}
		ptchar += _putchar(format[i]);
		i++;
	}
	rtn = fn + ptchar;
	va_end(ap);
	return (rtn);
}

/*	Printf Literal	*/
int _printf_literal(const char *format)
{
	int i;
	for (i = 0; format[i];)
	{
		if (format[i] == '%' && format[i + 1] == '%')
		{
			_putchar('%');
			i += 2;
		}
		else
		{
			_putchar(format[i]);
			i++;
		}
	}
	return (strlen(format));
}

// if (format[i + 1] == '\0' && format[i - 1] == *(types[j].name))
// 	break;