#include "main.h"
#include <string.h>
/**
 *_strcpy -  function that copies the string pointed to by src
 *@dest:  first param
 *@src:  second param
 *Return: temp
 */

char *_strcpy(char *dest, char *src)
{
char *temp = dest;

while (*src != '\0')
{
*dest = *src;
dest++;
src++;
}

*dest = ('\0');

return (temp);
}
