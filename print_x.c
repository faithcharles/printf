#include <unistd.h>

int print_int(int x)
{
        int i, len = 1, num, total = 0;
        char c;

        if (x < 0)
        {
                write(1, "-", 1);
                total++;
                x *= -1;
        }

        num = x;

        for (i = 0; num > 9; i++)
        {
                len *= 10;
                num /= 10;
        }

        while (i >= 0)
        {
                c = x / len + '0';
                write(1, &c, 1);
                total++;
                x %= len;
                len /= 10;
                i--;
        }
        return total;
}
