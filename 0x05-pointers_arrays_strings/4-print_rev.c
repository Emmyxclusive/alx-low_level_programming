#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 *print_rev - print the string in reverse order 
 *@s: string to return
 *Return: return nothing
 */
void print_rev(char *s)
{
int len = strlen(s);
while(len--)
ptutchar(*(s + len));
putchar(10);
}
