#include <stdio.h>
#include <math.h>

int calc_remainder(int number1, int number2);

int alg_amount(int number);

int alg_separate(int number);

int main (void)
{
    int number;

    do {
    printf("%s", "Enter with integer between 1 and 32767: ");
    scanf("%d", &number);
    
    if (number == -1) {
        puts("The end!");
        return 1;
    } else if (number >= 1 && number <= 32767) {
        break;
    } else {
        puts("");
        puts("The number is incorrect! Try again...");
        puts("");
    }

    } while(1);

    printf("The number %d separated is:\n", number);
    
    alg_separate(number);

    return 0;
}

int calc_remainder(int number1, int number2)
{
    return number1 % number2;
}

int alg_amount(int number)
{
    int count = 0;

    do {
        number = number / 10;
        count++;
    } while (number != 0);

    return count;
}

int alg_separate(int number)
/*Separa os algarismos por dois espaços*/
{
    int dividend;
    int alg;

    dividend = pow(10, alg_amount(number) - 1);

    do {
        alg = (number / dividend);

        alg = calc_remainder(alg, 10); // Utiliza a função, conforme solicitação do exercício
        
        printf("%d", alg);
        
        if (dividend != 1) {
            printf("%s", "  ");
        }

        dividend /= 10;

    }   while (dividend != 0); // Finaliza loop após dividendo ser igual a 1
    
    puts("");

    return 0;
}
