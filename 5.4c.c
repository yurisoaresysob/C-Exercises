#include <stdio.h>

void hello_world(void);

int main(void)
{
    hello_world();

    return 0;
}

void hello_world(void)
{
    printf("%s\n", "Hello World!");
}