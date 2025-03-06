#include <stdio.h>

int buildRetangle(int side1, int side2);

int main(void)
{
    int side1, side2;

    printf("%s", "Enter a side 1 and side 2: ");
    scanf("%d %d", &side1, &side2);

    puts("");

    buildRetangle(side1, side2);

    return 0;
}

int buildRetangle(int side1, int side2)
{
    for (int c = 1 ; c <= side1 ; c++) {
        for(int i = 1 ; i  <= side2 + 1; i++) {
            if(i  == side2 + 1)
                printf("\n");
            else
                printf("%s", "*");
        }
    }
}