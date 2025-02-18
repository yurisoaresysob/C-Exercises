#include <stdio.h>

int smallest(int x, int y, int z);

int main(void)
{
    printf("%d\n", smallest(23, 7, 1));

    return 0;
}

int smallest(int x, int y, int z)
{   
    if (x <= y) 
        if (x <= z) 
            return x;
        else
            return z;
    else
        if (y <= z)
            return  y;
        
        else
            return z;
}