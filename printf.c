#include "main.h"

/**
 * _printf - Entry Point
 * Desc: _printf function
 * @format: format type
 * Return: Function that produces output according to a format.
 */
int _printf(const char *format, ...)
{
	ar_t ary[] = {{"c", ar_c}, {"s", ar_s}, {"%", ar_mod},
		      {"d", ar_d}, {"i", ar_d}, {NULL, NULL}};
	va_list ar_l;
	int i = 0, j;
	int sof = 0, ante;

	if (format == NULL || (format[i] == '%' && format[(i + 1)] == '\0'))
		return (-1);
	va_start(ar_l, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			ante = 0;
			for (j = 0; ary[j].ar != NULL; j++)
			{
				if (format[i + 1] == ary[j].ar[0])
				{
					sof += ary[j].f(ar_l);
					ante++;
				}
			}
			if (ante > 0)
				i++;
			else
			{
				_putchar(format[i]);
				sof++;
			}
		}
		else
		{
			_putchar(format[i]);
			sof++;
		}
	}
	va_end(ar_l);
	return (sof);
}
