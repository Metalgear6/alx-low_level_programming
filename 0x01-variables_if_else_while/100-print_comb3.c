#include <stdio.h>
/**
   *main - Entry point
   *Discription: nombers from 01 to 89
   *Return: Always 0
   */
int main(void)
{
	int d;
	int p;

	for (d = '0'; d <= '9'; d++)
	{
	for (p = d + 1 ; p <= '9'; p++)
	{
		putchar(d + 0);
		putchar(p + 0);
		putchar(',');
		putchar(' ');
	if (d < 8)
		continue;
	}
	}
	putchar('\n');
	return (0);
}
