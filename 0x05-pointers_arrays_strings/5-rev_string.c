#include "main.h"
#include <string.h>
/**
 * rev_string - reversing a string
 * @s: parameter s
 */

void rev_string(char *s)
{
int length = strlen(s);
int i;
char temp;

for (i = 0; i < length / 2; i++)
{
temp = s[i];
s[i] = s[length - 1 - i];
s[length - 1 - i] = temp;
}
}
