#include <stdio.h>
void main()
{
    int n1, n2, par;
    printf("Escreva o primeiro número:");
    scanf("%d", &n1);
    printf("Escreva o segundo número:");
    scanf("%d", &n2);
    if (n1 < 0 && n2 < 0)
    {
        printf("Um dos valores é 0!");
    }
    else if (n1 < n2)
    {
        while (n1 <= n2)
        {
            if (n1 % 2 == 0)
            {
                
                printf("\n%d", n1);
            }
            n1++;
        }
    }
    else
    {
        while (n2 <= n1)
        {
            if (n2 % 2 == 0)
            {
                printf("\n%d", n2);
            }
            n2++;
        }
    }
}