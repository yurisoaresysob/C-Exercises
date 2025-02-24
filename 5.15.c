#include <stdio.h>
#include <math.h>

double hypotenuse(double sideA, double sideB);

int main (void)
{
    printf("1) %.2f\n", hypotenuse(3., 4.));
    printf("2) %.2f\n", hypotenuse(5., 12.));
    printf("3) %.2f\n", hypotenuse(8., 15.));

    return 0 ;
}

double hypotenuse(double sideA, double sideB)
{   
    return sqrt((sideA * sideA) + (sideB * sideB));;
}