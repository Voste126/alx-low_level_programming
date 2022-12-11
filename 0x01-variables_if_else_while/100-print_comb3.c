#include <stdio.h>

int main(void)
{
int i, j;
for (i = 0; i <= 9; i++)
{
for (j = i + 1; j <= 9; j++)
{putchar('0' + i);
putchar(',');
putchar(' ');
putchar('0' + j);
if (i != 8 || j != 9)
{putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}

~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
"100-print_comb3.c" [New File]                                  0,0-1         All

