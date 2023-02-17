#include <stdio.h>

/**
 * main - print alphabet in lowercase
 * Return: Always 0 (success)
 */
int main(void)
{
	char ch = 'a';
	int CH = 'A';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}

	while (CH <= 'Z')
	{
		putchar(CH);
		CH++;
	}

	putchar('\n');
	return (0);
}
