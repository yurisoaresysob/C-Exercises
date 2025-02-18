#include <stdio.h>

unsigned long long int factorial(unsigned int number);

int main(void)
{
    for (unsigned int i = 0; i <= 24; ++i) {
        printf("%u! = %llu\n", i, factorial(i));
    }
}

unsigned long long int factorial(unsigned int number)
{
    // base case
    if (number <= 1) {
        return 1;
    }
    else {
        return (number * factorial(number - 1));
    }       
}