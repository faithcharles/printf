#include "main.h"

/**get_f-get function
 */

int (*get_f(char c))(va_list *)

{

	int i = 0;

	sp sps[] = {
		{'c', print_c},

		{'s', print_s}
	};
	for (i = 0; i < 2; i++)
	{
		if (c == sps[i].sc)

			return (sps[i].f);
	}

	return (NULL);

}
