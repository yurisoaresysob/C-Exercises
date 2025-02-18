#include <stdio.h>

int plusOne(void);

int main(void)
{
    printf("%d\n", plusOne());
    printf("%d\n", plusOne());
    printf("%d\n", plusOne());
    printf("%d\n", plusOne());
    printf("%d\n", plusOne());


    return 0;
}

int plusOne(void)
{
    static int sum = 0;

    ++sum;
     
    return sum;
}