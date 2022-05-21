#include "main.h"

/**
 * _printf - works like prinf
 * @format: the format string
 * Return: number of bytes printed or -1 on error
 */

int _printf(const char *format, ...)

{
	int i, total = 0;

	char c;

	va_list args;

	int (*print)(va_list *);
	va_start(args, format);
	if (!format)
		return (0);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			i++;
			c = format[i];
			if (c == '%')
			{
				total += write(1, "%", 1);
				continue;
			}
			print = get_f(c);
			total += print(&args);
		}
		else
			total += write(1, &format[i], 1);
	}
	va_end(args);
	return (total);
}
