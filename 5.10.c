#include <stdio.h>
#include <math.h>

int main (void)
{
    int x, y;
    float userEntry;

    do {
        printf("Entre com um valor para ser arredondado (-1 para sair): ");
        scanf("%f", &userEntry);
        puts("");
        
        if (userEntry == -1)
            break;

        y = ceil(userEntry);

        printf("%.2f foi arredondado para %d", userEntry, y);
        puts("");

    } while (userEntry != -1);

    return 0;
}