#include <stdio.h>
/**
 * main - Entry point
 * Return: 0 Always a success
 */
int main(void)
{
	/*loop through a-z using ascii*/
	/*use putchar only*/
	char c;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);
	putchar('\n');
	return (0);
}
