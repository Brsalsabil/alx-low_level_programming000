#include <stdio.h>
/**
 * main - prints the alphabet in lowercase then in uppercase
 * Return: 0 (Success)
 */
int main(void)
{
	char c, d;

	c = 'a';
	d = 'A';
	while
		(c <= 'z') {
			putchar(c);
			c++;
		}
	while
		(d <= 'Z') {
			putchar(d);
			d++;
		}
	putchar ('\n');
	return (0);
}
