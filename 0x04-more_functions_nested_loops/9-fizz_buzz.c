#include <stio.h>
/**
 *main - checks for checks for a digit (0 thrugh 9).
 *Return:Always 0.
 */
int main(void)
{
	int x;

	for (x = 1; x <= 100; x++)
	{
		if (x % 3 == 0 || x % 5 == 0)
		{
			if (x % 3 == 0)
			{
				printf("Fizz");
			}
			if (x % 5 == 0)
			{
				printf("Buzz")
			}
		}
		elese
		{
			printf("%d", x);
		}
		if (x != 100)
		{
		putchar('');
		}
	}
	putchar('\n');
	return (0);
}
