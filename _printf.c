#include <unistd.h>
#include "main.h"
#include <stdarg.h>

int _printf(const char *format, ...)
{
        int y, j, x;
        int total = 0;
        va_list args;
        char c, f;
        char *s;

        va_start(args, format);
        for (y = 0; format[y] != '\0'; y++)
        {
                if (format[y] == '%')
                {
                        y++;
                        f = format[y];
                        if (f == '%')
                        {
                                write(1, "%", 1);
                                total++;
                        }
                        else if (f == 'x' || f == 'y')
                        {
                                d = va_arg(args, int);
                                total += print_int(d);
                        }
                        else if (f == 's')
                        {
                                s = va_arg(args, char *);
                                for (j = 0; s[j] != '\0'; j++)
                                {
                                        write(1, &s[j], 1);
                                        total++;
                                }
                        }
                        else if (f == 'c')
                        {
                                c = va_arg(args, int);
                                write(1, &c, 1);
                                total++;
                        }
                }
                else
                {
                        write(1, &format[y], 1);
                        total++;
                }
        }
        va_end(args);
        return total;
}
