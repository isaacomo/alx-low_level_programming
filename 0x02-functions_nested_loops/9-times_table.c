#include "main.h"

/**
 * print_tables -> prints 9 times table, starting with 0
 * @n argument passed
 */
int print_table(int n)
{
	int i, j;

	putchar('\n multiplication table of 8 and 9 are: \n');
	{
	for  (j =1; j <= 10; j++)
	{
		putchar('%d * %d = %d\n',i,j,1*j);
	}
	putchar('\n ==========\n');
	}
	return 0;
}
