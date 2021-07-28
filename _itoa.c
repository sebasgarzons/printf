#include "holberton.h"

// Function to swap two numbers
void swap(char *x, char *y)
{
	char t = *x;
	*x = *y;
	*y = t;
}

// Function to reverse `buffer[i…j]`
char *reverse(char *buffer, int i, int j)
{
	while (i < j)
	{
		swap(&buffer[i++], &buffer[j--]);
	}

	return buffer;
}

/**
 * _itoa - Function that converts any value from int to string
 * @i: Value entered type integer
 * @strout: Standar Out
 * @base: Base to convert values
 * Return: A value type char
 */

char *_itoa(int value, char *buffer, int base)
{
	int i = 0, n = 0;
	// invalid input
	if (base < 2 || base > 32)
	{
		return buffer;
	}
	n = _abs(value);
	while (n)
	{
		int r = n % base;

		if (r >= 10)
		{
			buffer[i++] = 65 + (r - 10);
		}
		else
		{
			buffer[i++] = 48 + r;
		}

		n = n / base;
	}

	// if the number is 0
	if (i == 0)
	{
		buffer[i++] = '0';
	}

	// If the base is 10 and the value is negative, the resulting string
	// is preceded with a minus sign (-)
	// With any other base, value is always considered unsigned
	if (value < 0 && base == 10)
	{
		buffer[i++] = '-';
	}

	buffer[i] = '\0'; // null terminate string

	// reverse the string and return it
	return reverse(buffer, 0, i - 1);
}
