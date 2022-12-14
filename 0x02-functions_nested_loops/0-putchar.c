#include <stdio.h>
#include <unistd.h>
/**
 * main - prints '_putchar \n'
 *
 * Return: 0
 */
int main(void)
{
	char str[] = "_putchar \n";
	int i = 0;

	while (str[i] != '\0')
	{
		char c = str[i];

		putchar(c);
		i++;
	}
	return (0);
}
