#include <stdio.h>
#include <stdlib.h>
#include <time.h>

using namespace std;
/*
 *betty style doc for function main goes there
 *main - Entry point
 * Return: Value 0
 */
int main(void)
{
/*Seed the random number generator with the current time*/
srand(time(0));

/* Generate a random number and store it in the variable n*/
int n = rand() % RAND_MAX;

/*Print the number*/
cout << "The number is " << n << ": ";

/* Check if the number is positive, zero, or negative, and print the result*/
if (n > 0)
{
cout << "is positive" << endl;
}
else if (n == 0)
{
cout << "is zero" << endl;
}
else
{
cout << "is negative" << endl;
}

return (0);
}
