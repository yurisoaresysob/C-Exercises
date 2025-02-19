#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    srand(time(NULL));
    printf("a) %d\n", 1 + rand() % 6);     //  1 ≤ n ≤ 6
    printf("b) %d\n", 100 + rand() % 900); // 100 ≤ n ≤ 1000
    printf("c) %d\n", 0 + rand() % 18); // 0 ≤ n ≤ 19
    printf("d) %d\n", 1000 + rand() % 1222); // 1000 ≤ n ≤ 2222
    printf("e) %d\n", -1 + rand() % 2); // –1 ≤ n ≤ 1
    printf("f) %d\n", -3 + rand() % 8); // –3 ≤ n ≤ 11

    return 0;
}