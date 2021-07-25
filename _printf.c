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
		{"i", _printf_i}};
	int i = 0, j = 0;

	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			for (j = 0; j < 4; j++)
			{
				if (format[i] == *(types[j].name))
					types[j].f(ap);
			}
		}
		i++;
	}

	// i++;

	// _printf_s(ap);
	// _printf_literal(format);
	return (0);
}
