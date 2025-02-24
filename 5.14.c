#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int a , b, c;

    srand(time(NULL));

    a = 1 + rand() % 10; // Gera valores aleatórios de 1 a 10
    a = 3 * a; // Multiplica por 3 gerando valores de 3 a 30

    b  = 2 * (rand() % 9); // Gera valores aleatórios de 0 a 16 pulando de 2 em 2
    b = 3 + b; // Soma com 3 para gerar valores de 3-19, pulando de 2 em 2
    
    c = 5 * (rand() % 7);
    c = 3 + c;

    printf("a) %d\n", a);
    printf("b) %d\n", b);
    printf("c) %d\n", c);

    return 0;
}