#include "main.h"
/**
 * ar_c - Entry Point
 * Desc: ar_c function
 * @ar_l: va_list printf function
 * Return: Char
 */
int ar_c(va_list ar_l)
{
	_putchar(va_arg(ar_l, int));
	return (1);
}
/**
 * ar_s - Entry Point
 * Desc: ar_s function
 * @ar_l: va_list ar_l
 * Return: String
 */
int ar_s(va_list ar_l)
{
	char *s = va_arg(ar_l, char *);

	int sof = 0;

	if (s == NULL)
	{
		s = "(null)";
	}

	while (s[sof] != '\0')
	{
		_putchar(s[sof]);
		sof++;
	}
	return (sof);
}
/**
 * ar_mod - Entry Point
 * Desc: ar_mod function
 * @ar_l: va_list ar_l
 * Return: %
 */
int ar_mod(__attribute__((unused)) va_list ar_l)
{
	_putchar('%');
	return (1);
}
/**
 * ar_d - Entry Point
 * Desc: ar_d function that prints an decimal integer
 * @ar_l: va_list ar_l
 * Return: numbers of integer printed.
 */
int ar_d(va_list ar_l)
{
	unsigned int g, f, c = 0, i = 0;
	unsigned long int b = 1;
	int num = va_arg(ar_l, int);

	if (num == 0)
	{
		_putchar(num + '0');
		return (i + 1);
	}
	if (num < 0)
	{
		_putchar('-');
		g = num * (-1);
	}
	else
	{
		g = num;
	}

	f = g;
	while (g != 0)
	{
		g = g / 10;
		b = b * 10;
		c++;
	}
	b = b / 10;
	i = c;
	while (c != 0)
	{
		_putchar((f / b) + '0');
		f = f % b;
		b = b / 10;
		c--;
	}
	if (num < 0)
		i++;

	return (i);
}
