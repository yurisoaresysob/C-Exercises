#include <stdio.h>

int isEven(int number);

int main(void)
{   
    int a, b, c, d;

    printf("%s", "Enter a number: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);

    if (isEven(a) == 1) 
        printf("%d é par\n", a);
    else
        printf("%d é impar\n", a);

    if (isEven(b) == 1) 
        printf("%d é par\n", b);
    else
        printf("%d é impar\n", b);   

    if (isEven(c) == 1) 
        printf("%d é par\n", c);
    else
        printf("%d é impar\n", c); 
   
    if (isEven(d) == 1) 
        printf("%d é par\n", d);
    else
        printf("%d é impar\n", d);

    return 0;
}

int isEven(int number)
{
    if (number % 2 == 0)
        return 1;
    else
        return 0;
}