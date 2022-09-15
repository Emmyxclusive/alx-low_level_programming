#include <stdio.h>
/**
 * main - print if the number is postive, zero, or negative
 *
 * Description: using the main function
 * this program prints "Programming is positive, zero, or negative
 * Reurn: 0
 */
int main(void)
 /* your code goes here */
{
char ch;

for (ch = 'a' ; ch <= 'z' ; ch++)

{

if (ch != 'e' && ch != 'q')

{

putchar(ch);

}

}

putchar('\n');

return (0);
}
