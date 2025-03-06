#include <stdio.h>

double areaTriangle(double sideA, double sideB, double sideC); // Calcula a área do triângulo

int isTriangle(double sideA, double sideB, double sideC); // Verifica se os 3 lados formam um triângulo

int isSides(double sideA, double sideB, double sideC); // Verifica quais dos números são lados

int main(void)
{
    double a, b, c;
    int userContinue;

    do {
        printf("%s", "Entre com os valores dos 3 lados do triangulo: ");
        scanf("%lf %lf %lf", &a, &b, &c);

        // Verifica se os valores são válidos para um triangulo
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
            printf("A área do triaângulo é: %.2f\n", areaTriangle(a, b, c));

        }
    } while (1);

    return 0;
}

int isTriangle(double sideA, double sideB, double sideC)
{
    if (sideA < sideB + sideC && sideB < sideA + sideC && sideC < sideA + sideB)
        return 0;
    else {
        return 1;
    }
}


double areaTriangle(double sideA, double sideB, double sideC)
{
    int sides;

    sides = isSides(sideA, sideB, sideC);

    if (sides == 10)
        return sideB * sideC / 2;
    else if (sides == 11)
        return sideA * sideC / 2;
    else if (sides == 12)
        return sideA * sideB / 2;
    else
        printf("%s", "Valor de lados inválido!");
        return 1;
}

int isSides(double sideA, double sideB, double sideC)
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