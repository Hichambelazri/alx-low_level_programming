#include <stdio.h>
/**
 * main - Entry point
 *
 * Discription: 'Print alphabets lowercase'
 *
 * Return: always 0
*/
int main(void)
{
	int n = 97;

	while (n <= 122)
	{
		putchar(65);
		n++;
	}
	putchar('\n');
	return (0);
}
