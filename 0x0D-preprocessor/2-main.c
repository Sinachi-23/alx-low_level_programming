#include <stdio.h>
#include <stdlib.h>

/**
  * main - Prints the name of the file it was compiled from,
  *      followed by a new line
  * Return: 0 if succesful
  */
int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
