#include <stdio.h>

/**
 * main - print alpha in lower and upper case
 * Return: Always 0
 */
int main(void)
{
	char ch;
	char cd;

	for (ch = 'A'; ch <= 'Z'; ch++)
		putchar(ch);

	for (cd = 'a'; cd <= 'z'; cd++)
		putchar(cd);

	putchar('\n');

	return (0);
}
