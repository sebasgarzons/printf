#include "holberton.h"

/**
 * edge_cases - evaluate edges cases
 * @format: string in printf
 * @edge: valist
 * Return: Error -1 or 0
 */

int edge_cases(const char *format, va_list edge)
{
	int i;

	if (format == NULL)
		return (-1);

	for (i = 0; format[i]; i++)
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == '%' && format[i + 1] == '%')
			{
				return (-1);
			}
		}
	}
	(void)edge;
	(void)format;
	return (0);
}
