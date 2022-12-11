#include <stdio.h>

int main(void)
{
/* Print the alphabet in lowercase*/
for (char c = 'a'; c <= 'z'; c++)
putchar(c);
/* Print a new line*/
putchar('\n');
/* Print the alphabet in uppercase*/
for (char c = 'A'; c <= 'Z'; c++)
putchar(c);
/* Print a new line*/
putchar('\n');
return (0);
}

