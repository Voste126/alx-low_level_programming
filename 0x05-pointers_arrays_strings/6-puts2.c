#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * puts2 - puts2 function
 * @str: str parameter
 */

void puts2(char *str)
{
	int i;
	int len;

	len = strlen(str);
for (i = 0; len > 1; i += 2)
{
putchar(str[i]);
}
putchar('\n');
}
