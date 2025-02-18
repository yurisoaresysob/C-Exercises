#include <stdio.h>

float intToFloat(int value);

int main (void)
{
    printf("%.2f\n", intToFloat(10));

    return 0;
}

float intToFloat(int value) 
{
    value = value * 1.;

    return value;
}