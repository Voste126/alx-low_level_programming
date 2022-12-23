#include "main.h"
#include <ctype.h>
/**
 * string_toupper - converting any string to upper case
 * @s: string param
 * Return: string
 */

char *string_toupper(char *s)
{
int i;

for (i = 0; s[i] != '\0'; i++)
{
s[i] = toupper(s[i]);
}
return (s);
}
