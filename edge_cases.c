#include "holberton.h"

/**
 * edge_cases - evaluate edges cases
 * @format: string in printf
 * @edge: valist
 * Return: Error -1 or 0
 */

int edge_cases(const char *format, va_list edge)
{
	int i, j;
	int banderita = 0;
	int banderita_per = 0;

	if (format == NULL)
		return (-1);

	for (i = 0; format[i]; i++)
	{
		if (format[i] == '%')
		{
			banderita_per++;
			i++;
			if (format[i] == '%' && format[i + 1] == '%' && format[i + 2] != '%')
				return (-1);

			for (j = 0; j < 11; j++)
			{
				if (format[i] == *(types[j].name))
					banderita++;
			}
			if (banderita != banderita_per)
				return (-1);
		}
	}

	(void)edge;
	(void)format;
	return (0);
}
