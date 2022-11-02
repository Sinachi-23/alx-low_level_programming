#include "main.h"

/**
  * _strlen_recursion - a function that returns the length of a string
  * @s: a pointer to the length of string to return
  * Return: the length of s
  */
int _strlen_recursion(char *s)
{
	return (*s ? _strlen_recursion(s + 1) + 1 : 0);
}
