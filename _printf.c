#include "holberton.h"

/**
 * _printf - asd
 * @format: asd
 * Return: the number of characters printed
 */

int _printf(const char *format, ...)
{
	va_list ap;
	va_start(ap, format);

	funct_t types[] = {
		{"s", _printf_s},
		{"c", _printf_c},
		{"d", _printf_d},
		{"i", _printf_i},
		{"%", _printf_per}};
	int i = 0, j = 0;
	int ptchar = 0;
	int fn = 0;
	int rtn = 0;

	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			for (j = 0; j < 4; j++)
			{
				if (format[i] == *(types[j].name))
					fn += types[j].f(ap);
			}
			if (format[i + 1] == '\0' && format[i - 1] == *(types[j].name))
				break;
			i++;
		}
		ptchar += _putchar(format[i]);
		i++;
	}
	rtn = fn + ptchar;
	va_end(ap);
	return (rtn);
}
