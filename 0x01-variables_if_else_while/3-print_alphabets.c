#include <stdio.h>
/**
*main- is a function
*
*Return: is zero
*/
int  main(void)
{
	char i;

	for (i = 'a' ; i <= 'z'; i++)
		putchar(i);
	for (i = 'A' ; i <= 'Z' ; i++)
		putchar(i);
	putchar('\n');
	return (0);
}

