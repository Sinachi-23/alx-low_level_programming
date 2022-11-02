#include "main.h"
#include <stdio.h>
/**
  * _sqrt_recursion - a function that returns
  * the natural square root of a number
  * @n: input integer
  * Return: the natural square root of n
  */
int _sqrt_recursion(int n)
{
	if (n == 1)
		return (1);
	else if (n < 0)
		return (-1);
	else if (n == 0)
		return (0);
	return (_sqrt(1, n));
}

/**
  * _sqrt_check - Find the square root
  * @n: number to find square root of
  * @c: number to check if it's the sqrt of n
  * Return: the sqrt value
  */
int _sqrt_check(int n, int c)
{
	if (c * c == n)
	{
		return (c);
	}
	else if (c >= n / 2)
		return (-1);

	return (_sqrt_check(n, c + 1));
}
