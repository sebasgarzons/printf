#include "holberton.h"

/**
 * get_op_function - get function match with %
 * according to a format.
 * @format: string
 * Return: function to operate
 */
int (*get_op_function(const char *format))(va_list arg)
{
	int j = 0;
	int i = 0;

	while (types[j].name)
	{
		if (format[i + 1] == *(types[j].name))
		{
			return (types[j].f);
		}
		j++;
	}
	return (types[j].f);
}

/**
 * _printf - function that produces output
 * according to a format.
 * @format: is a character string.
 * Return: the number of characters printed
 */

int _printf(const char *format, ...)
{
	va_list ap;
	int (*func)(va_list);

	int i = 0, a, counter = 0;

	va_start(ap, format);

	a = edge_cases(format, ap);
	if (a != 0)
		return (a);

	while (format[i])
	{
		if (format[i] == '%')
		{
			func = get_op_function(&format[i]);
			if (func != NULL)
			{
				counter += func(ap);
				i += 2;
				continue;
			}
			else
			{
				if (format[i] == '%' && format[i + 1] == '\0')
					return (-1);
				counter += write(1, &format[i], 1);
			}
		}
		else
			counter += write(1, &format[i], 1);
		i++;
	}
	va_end(ap);
	return (counter);
}
