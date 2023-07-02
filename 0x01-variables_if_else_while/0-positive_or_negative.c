#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - print whether the number stored in the variable n is positive, zero or negative
 * Return: Always 0 (success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
if ( n>0 )
{ 
	print("%d is positive\n", n);
}
	else if ( n == o) 
{
	print("%d is zero\n", n);
}
else 
{
	print("%d is negtative\n", n);

}

	return (0);
}
