#include <stdio.h>
#include <math.h>

float roundToInteger(float number);
float roundToTenths(float number);
float roundToHundreths(float number);
float roundToThousandths(float number);

int main(void)
{
    float x = 2.6858234;

    printf("%.2f\n", x);
    printf("%f\n", roundToInteger(x));
    printf("%f\n", roundToTenths(x));
    printf("%f\n", roundToHundreths(x));
    printf("%f\n", roundToThousandths(x));
    
    return 0;
}

float roundToInteger(float number)
{
    return floor(number);
}

float roundToTenths(float number)
{
    return floor(number * 10 + .5) / 10;
}

float roundToHundreths(float number)
{
    return floor(number * 100 + .5) / 100;
}

float roundToThousandths(float number)
{
    return floor(number * 1000 + .5) / 1000;
}

