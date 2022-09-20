#include "main.h"
/**
 * _strlen - return the lenth of a string
 * @s: the string
 * Return: lenght as an integer
 */
int _strlen(char *s)
{
int len = 0;
while (*(s + len) != '\0')
len++;
return (len);
}
