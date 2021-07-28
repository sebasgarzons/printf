#include "holberton.h"
#include <stdio.h>

/**
 * _printf_bin - function that prints a binary numer
 * @s: va_list
 * Return: string's length
 */

int _printf_bin(va_list s)
{
	char *str = va_arg(s, char *);

	int size = write(1, str, _strlen(str));

	return (size);
}

/**
 * _printf_o - function that prints an octal number
 * @o: va_list
 * Return: 1
 */

int _printf_o(va_list o)
{
	unsigned int length;

	char buffer[1024];

	_itoa(va_arg(o, unsigned int), buffer, 8);
	length = write(1, buffer, _strlen(buffer));

	return (length);
}

/**
 * _printf_x - function that prints an hexadecimal
 * @x: va_list
 * Return: length
 */

int _printf_x(va_list x)
{
	unsigned int length;

	char buffer[1024];

	_itoa(va_arg(x, unsigned int), buffer, 16);
	length = write(1, buffer, _strlen(buffer));

	return (length);
}

/**
 * _printf_u - function that prints unsigned decimal
 * @u: va_list
 * Return: length
 */

int _printf_u(va_list u)
{
	unsigned int length;

	char buffer[1024];

	_itoa(va_arg(u, unsigned int), buffer, 10);
	length = write(1, buffer, _strlen(buffer));

	return (length);
}

/**
 * _printf_R - function that prints ROT'13
 * @R: va_list
 * Return: length
 */

int _printf_R(va_list R)
{
	char *n = va_arg(R, char *);
	char *input = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *output = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i, k;

	if (n == NULL)
		return (-1);

	for (i = 0; n[i]; i++)
	{
		for (k = 0; input[k]; k++)
		{
			if (n[i] == input[k])
			{
				write(1, &output[k], 1);
				break;
			}
		}
		if (!input[i])
			write(1, &n[i], 1);
	}
	return (_strlen(n));
}
