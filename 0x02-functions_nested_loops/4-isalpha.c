#include "main.h"
/**
  *_isalpha - check for alphabet character
  *@c: the character to be checked
  *Return: 1 for alphabic or 0 for others
  */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
