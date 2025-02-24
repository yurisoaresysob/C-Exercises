#include <stdio.h>
#include <math.h>

/* Programa que solicita 3 valores ao usuário e verifica se é triângulo retângulo */

int isTriangle(int sideA, int sideB, int sideC); // Verifica se os 3 lados formam um triângulo

int isRightTriangle(int sideA, int sideB, int sideC);

int isSides(int sideA, int sideB, int sideC); // Verifica quais dos números são lados

int main(void)
{
    int a, b, c;
    int userContinue;

    do {
        printf("%s", "Entre com os valores dos 3 lados do triangulo: ");
        scanf("%d %d %d", &a, &b, &c);
        
        if (isTriangle(a, b, c) == 1) {
            printf("%s", "Os lados informados não formam um triângulo, por favor, insira um numero válido!\n");
            printf("%s", "Pressione 1 para tentar novamente ou 2 para sair: ");
            scanf("%d", &userContinue);

            switch (userContinue){
                case 1:
                    continue;
                    break;

                case 2:
                    break;

                default:
                    puts("Entrada incorreta!\n");
                    break;
            }
    
        return 1;
    }

    else {
        if (isRightTriangle(a, b, c) == 1) {
            puts("O triângulo é retângulo");
            return 0;
        } else
            puts("O triângulo não é retângulo");
            return 0;
    } 
    } while (1);
}

int isRightTriangle(int sideA, int sideB, int sideC)
{
    if (isSides(sideA, sideB, sideC) == 10){
        if ( sideA == sqrt(pow(sideB, 2) + pow(sideC, 2)))
            return 1;
    } else if (isSides(sideA, sideB, sideC) == 11) {
        if ( sideB == sqrt(pow(sideA, 2) + pow(sideC, 2)))
            return 1;
    } else if (isSides(sideA, sideB, sideC) == 12) {
        if ( sideC == sqrt(pow(sideB, 2) + pow(sideA, 2)))
            return 1;
    } else
        return 0;
}
   

int isSides(int sideA, int sideB, int sideC)
{
    if (sideA > sideB && sideA > sideC)
        return 10;
    else if (sideB > sideA && sideB > sideC)
        return 11;
    else if (sideC > sideA && sideC > sideB)
        return 12;
    else
        return 1;
}

int isTriangle(int sideA, int sideB, int sideC)
{
    if (sideA < sideB + sideC && sideB < sideA + sideC && sideC < sideA + sideB)
        return 0;
    else {
        return 1;
    }
}