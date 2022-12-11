#include <stdio.h>

int main(void)
{
/* Print the lowercase alphabet in reverse.*/
for (char c = 'z'; c >= 'a'; c--)
{
putchar(c);
}
/* Add a new line.*/
putchar('\n');
return (0);
}

