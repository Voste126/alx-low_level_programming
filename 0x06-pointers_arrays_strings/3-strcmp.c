#include "main.h"
#include <string.h>
/**
 *_strcmp - function that compares two strings
 * @s1: param1
 * @s2: param2
 * Return: interger
 */

int _strcmp(char *s1, char *s2)
{
while (*s1 && *s2)
{
if (*s1 != *s2)
{
return (*s1 - *s2);
}
s1++;
s2++;
}

return (*s1 - *s2);
}
