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

	i = 0;
	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			putchar(str[i]);
		}
		i++;
	}
	putchar('\n');
}
