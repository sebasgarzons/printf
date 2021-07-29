#include "holberton.h"

/**
 * edge_cases - evaluate edges cases
 * @format: string in printf
 * @edge: valist
 * Return: Error -1 or 0
 */

int edge_cases(const char *format, va_list edge)
{
	int k = 0;
	int i = 0;

	if (format == NULL)
		return (-1);

	for (i = 0; format[i]; i += 2)
	{
		if (format[i] == '%')
		{
			for (k = 0; types[k].name; k++)
			{
				if (format[i] == '%' && format[i + 1] == *(types[k].name))
				{
					break;
				}
			}
		}
		if ((format[i] == '%' && format[i + 1] == ' ') ||
			(format[i] == '%' && format[i + 1] == '\0'))
		{
			return (-1);
		}
		else
			break;
	}
	(void)edge;
	(void)format;
	return (0);
}
