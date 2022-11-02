#include "main.h"

/**
  * factorial - calculate the factorial of a given number n
  * @n: number to work on
  * Return: the factorial of n
  */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	return (n > 1 ? n * factorial(n - 1) : 1);
}
