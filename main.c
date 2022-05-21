#include "main.h"

/**
 * main - Entry point
 * Description - Test _printf
 * Return: Always 0 (Success)
 */

int main(void)

{

	int len1, len2;

	puts("\tTest for plain string");
	printf("This should work\n");
	_printf("This should work\n");
	puts("\n\tTest for return value:");
	len1 = printf("Just testing\n");

	len2 = _printf("Just testing\n");

	if (len1 == len2)

		puts("√: Test passed");
	else
		puts("X: Test failed");
	puts("\tTest for printing %");
	printf("Here's a percentage symbol: %%\n");
	
	_printf("Here's a percentage symbol: %%\n");

	puts("\n");

	len1 = printf("In printf, %%%% gives %%\n");

	len2 = _printf("In printf, %%%% gives %%\n");

	if (len1 == len2)
		puts("√: Return value test passed");
	else
		puts("X: Return value test failed");
	return (0);
}
