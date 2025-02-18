#include <stdio.h>
#include <math.h>

double hypotenuse(double side1, double side2);

int main(void)
{
    double a = 4., b =3. , h;

    h = hypotenuse(a, b);

    printf("%.2f\n", h);

    return 0;
}

double hypotenuse(double side1, double side2)
{
    double h2;

    printf("Entrou na funçao\n");

    return sqrt((side1 * side1) + (side2 * side2)) ; 
}