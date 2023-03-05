#include "main.h"
/**
  *_abs - computes the absolut of integer
  *@c: the number
  *Return: Absolut of number or zero
  */
int _abs(int c)
{
	if (c < 0)
	{
		int abs_val;

		abs_val = c * -1;
		return (abs_val);
	}
	return (c);
}
