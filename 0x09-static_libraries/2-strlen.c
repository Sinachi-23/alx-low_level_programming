#include "main.h"

/**
  * _strlen - A function that returns the length of a string
  * @s: a character variable that the function takes in
  *
  * Return: Always 0
  */

int _strlen(char *s)
{
	int len = 0;

	if (s)
	{
		while (*(s + len))
			++len;
	}

	return (len);
}
