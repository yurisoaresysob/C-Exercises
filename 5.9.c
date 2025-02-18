#include <stdio.h>

float calculateCharges(int amountTime);

int main(void)
{
    float a, b, c;
    int timeA = 12, timeB = 34, timeC = 48;

    a = calculateCharges(timeA);
    b = calculateCharges(timeB);
    c = calculateCharges(timeC);

    printf("%s %7s %7s\n", "Car", "Hours", "Charge");
    printf("%d %7d %9.2f\n", 1, timeA, a);
    printf("%d %7d %9.2f\n", 2, timeB, b);
    printf("%d %7d %9.2f\n",3 , timeC, c);
    printf("%s %3d %9.2f\n", "TOTAL", timeA + timeB + timeC, a + b + c);

    return 0;
}
float calculateCharges(int amountTime)
{
    float addForHour = 5.;
    float addServiceTaxHour = 0.5;
    float amountMoney;

    if (amountTime <= 8) {
        // Calculo para aluguel menor que 8 horas
        amountMoney = 25. + (amountTime * 0.5);
    } 
    else if (amountTime > 8 && amountTime <= 13){
        // Calculo para aluguel entre 9 e 13 horas
        amountMoney = 25. + (5. * (amountTime - 8)) + (0.5 * amountTime);
    } 
    else {
        // Calculo para aluguel de 13 a 24 horas
        if ( amountTime <= 24)
            amountMoney = 50. + (0.5 * amountTime);
        else
            // Para alugueis acima de 24 horas
            if (amountTime % 24 == 0)
                amountMoney = ((amountTime / 24) * 50) + (0.5 * amountTime);
            else
                amountMoney = ((amountTime / 24) + 1) * 50. + (0.5 * amountTime);
            }
            
    return amountMoney;
}
