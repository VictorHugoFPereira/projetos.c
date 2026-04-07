#include <stdio.h>
void main()
{
    int a, b, c, menor;
    printf("Escreva o primeiro número:");
    scanf("%d", &a);
    printf("Escreva o segundo número:");
    scanf("%d", &b);
    printf("Escreva o terceiro número:");
    scanf("%d", &c);
    if (a < b && a < c)
    {
        menor = a;
        printf("O menor número é:%d",menor);
    }
    else if (b < a && b < c)
    {
        menor = b;
        printf("O menor número é:%d",menor);
    }
    else
    {
        menor = c;
        printf("O menor número é:%d",menor);
    }
}