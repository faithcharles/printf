#include "main.h"

/**
 * print_c - prints character arg
 * @p: argument list
 * Return: number of bytes printed
 */

int print_c(va_list *p)

{

	char c = va_arg(*p, int);

	int i = sizeof(c);

	write(1, &c, i);

	return (i);
}

/**
 * print_s - prints string arg
 * @p: argument list
 * Return: number of bytes printed
 */

int print_s(va_list *p)

{
	int len = 0;

	char *s = va_arg(*p, char *);

	while (s[len] != '\0')
		len++;
	write(1, s, len);
	return (len);

}
