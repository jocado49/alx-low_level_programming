#include <stdio.h>

/**
 * main - print alpha in lower and upper case
 * Return: Always 0
 */
int main(void)
{
	char ch;
	char cd;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);

	for (cd = 'A'; cd <= 'Z'; cd++)
		putchar(cd);

	putchar('\n');

	return (0);
}
