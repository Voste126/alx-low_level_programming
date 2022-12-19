#include "main.h"
#include <string.h>
/**
 *puts_half - puts half
 *@str: string parameter
 */

void puts_half(char *str)
{
int length = strlen(str);
int start = (length - 1) / 2;
int i;

if (length % 2 == 0)
{
start++;
}
for (i = start; i < length; i++)
{
putchar(str[i]);
}
putchar('\n');
}
