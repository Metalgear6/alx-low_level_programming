#include <stdio.h>
/**
   *main - Entry point
   *Discription: nombers from 0 to 9
   *Return: Always 0
   */
int main(void)
{
	int n = 122;

	while (n >= 97)
	{
		putchar(n);
		n--;
	}
	putchar('\n');
	return (0);
}
