#include <stdio.h>
#include <math.h>

int main(void)
{
    printf("fabs(10.85): %.2f\n", fabs(10.85));
    printf("floor(10.85): %.2f\n", floor(10.85));
    printf("ceil(9.234): %.2f\n", ceil(9.234));
    printf("fabs(0.0): %.2f\n", fabs(0.0));
    printf("ceil(-34.87): %.2f\n", fabs(-34.87));
    printf("ceil(-fab(-12 - floor(-9.5))): %.2f\n", ceil(-fabs(-12 - floor(-9.5))));


    return 0;

}