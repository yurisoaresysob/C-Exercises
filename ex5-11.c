#include <stdio.h>
#include <stdlib.h>
#include <time.h>

enum Status {CONTINUE, WON, LOST};

int rollDice(void); // Function prototype

int main(void)
{
    srand(time(NULL));

    int myPoint; // O Jogador precisa fazer esta pontuação para ganhar
    enum Status gameStatus; // Pode conter CONTINUE, WIN, LOST
    int sum = rollDice();

    switch(sum){
        case 7:
        case 11:
            gameStatus = WON;
            break;

        case 2:
        case 3:
        case 12:
            gameStatus = LOST;
            break;

        default:
            gameStatus = CONTINUE;
            myPoint = sum;
            printf("Point is %d\n", myPoint);
            break;
    }

    while (CONTINUE == gameStatus) {
        sum = rollDice();

        if (sum == myPoint) {
            gameStatus = WON;
        }
        else {
            if (7 == sum) {
                gameStatus = LOST;
            }
        }
    }

    if (WON == myPoint) {
        puts("Player wins");
    }
    else {
        puts("Player loses");
    }
}

int rollDice(void)
{
    int die1 = 1 + (rand() % 6);
    int die2 = 1 + (rand() % 6);

    printf("Player rolled %d + %d = %d\n", die1, die2, die1 + die2);
    return die1 + die2;

}