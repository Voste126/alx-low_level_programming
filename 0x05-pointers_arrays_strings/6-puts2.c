#include "main.h"
#include <stdio.h>
/**
 * puts2 - puts2 function
 * @str: str parameter
 */

void puts2(char *str)
{
	int i;
for (i = 0; str[i] != '\0'; i += 2)
{
putchar(str[i]);
}
if (isprint(str[i]))
{
putchar(str[i]);
}
if (i % 2 != 0)
{
putchar(str[i - 1]);
}
putchar('\n');
}
