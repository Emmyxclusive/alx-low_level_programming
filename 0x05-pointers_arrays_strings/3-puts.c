#include <stdio.h>
#include "main.h"
/**
 * _puts - print a string
 * @str: the string
 *
 * Description: print a string
 * on succes: return no error
 */
void _puts(char *str)
{
int i = 0;
while (*(str + i) != ('\0'))
{
putchar(*(str + i));
i++;
}
putchar(10);
}
