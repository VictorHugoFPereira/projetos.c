#include <stdio.h>
int imprimirnumero(int x)
{
    for (int i = 1; i <= x; i++)
    {
        printf("\n%d", i);
    }
}

void main()
{
    imprimirnumero(5);
}