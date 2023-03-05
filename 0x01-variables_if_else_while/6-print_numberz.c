#include <stdio.h>
/**
  *main - Entry point
  *Discription: nombers from 0 to 9
  *Return: Always 0
  */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		putchar(n + 48);
	}
	putchar('\n');
	return (0);
}
