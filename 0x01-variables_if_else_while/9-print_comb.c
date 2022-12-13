#include<stdio.h>
#include<stdlib.h>
/**
 * main- main block
 * Description: prints all single numbers of base of 10
 * starting from 0, folowed by a new line
 * Returns: 0
 */
int main(void)
{
	int c = 0;

	while (c < 10)
	{
		putchar(48 + c);

		if (c != 9)
		{
			putchar(',');
			putchar(' ');
		}
		c++;
	}
	putchar('\n');
	return (0);
}
