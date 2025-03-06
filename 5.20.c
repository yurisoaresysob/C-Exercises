#include <stdio.h>

int buildRectangle(int side1, int side2, char charac);

int main(void)
{
    int side1, side2;
    char character;

    printf("%s", "Enter a side 1 and side 2: ");
    scanf("%d %d", &side1, &side2);
    printf("%s", "Enter a character: ");
    scanf(" %c", &character);

    puts("");

    buildRectangle(side1, side2, character);

    return 0;
}

int buildRectangle(int side1, int side2, char charac)
{
    for (int c = 1 ; c <= side1 ; c++) {
        for(int i = 1 ; i  <= side2 + 1; i++) {
            if(i  == side2 + 1)
                printf("\n");
            else
                printf("%c", charac);
        }
    }

    return 0;
}