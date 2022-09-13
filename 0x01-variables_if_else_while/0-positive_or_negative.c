#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - print if the number is positive, negative or zero
*
* Description: using the main function
* this program prints "programming is positive, zero or negative
* Return: 0
*/
int main(void)
{
int n;
srand(time(0));
n = srand() - RAND_MAX / 2;
  /* your code goes here */
if (n>0)
{
	printf("%i is positive\n", n);
}
else if (n==0)
{
	printf("%i is zere\n", n):
}
else if (n < 0)
{
	printf("%i is is negative\n", n);
}
return 0;
}
