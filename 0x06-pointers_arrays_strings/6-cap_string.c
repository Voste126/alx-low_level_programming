#include "main.h"
#include <ctype.h>
/**
 * cap_string - capitalization function
 * @str: string param
 * Return: capitalized string
 */

char *cap_string(char *str)
{
int i = 0;

/* Convert first character to uppercase if it is a letter */
if (islower(str[i]))
{
str[i] = toupper(str[i]);
}

i++;

while (str[i] != '\0')
{
if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'
|| str[i] == ',' || str[i] == ';' || str[i] == '.'
|| str[i] == '!' || str[i] == '?' || str[i] == '"'
|| str[i] == '(' || str[i] == ')' || str[i] == '{'
|| str[i] == '}')
{
i++;
if (islower(str[i]))
{
str[i] = toupper(str[i]);
}
}
i++;
}

return (str);
}
