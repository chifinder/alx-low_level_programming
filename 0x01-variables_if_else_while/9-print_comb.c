#include <stdio.h>
#include <unistd.h>
/**
 * main- prints "all possible combinations of single-digit numbers"
 * -prints numbers with combinations of digit,
 * -followed by a new line,
 * Returns: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = '0'; i <= '9' ; i++)
	{
		putchar(i);

		if (i != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
