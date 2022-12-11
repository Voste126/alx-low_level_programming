#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
/* Generate a random number and store it in the variable n*/
int n;
srand(time(NULL));
n = rand() % RAND_MAX;

/*Print the last digit of n*/
printf("Last digit of %d is ", n);

/* Obtain the last digit of n using the modulo operator*/
int last_digit = n % 10;

/* Print the last digit of n*/
if (last_digit > 5)
{
printf("and is greater than 5\n");
}
else if (last_digit == 0)
{
printf("and is 0\n");
}
else
{
printf("and is less than 6 and not 0\n");
}
return (0);
}

