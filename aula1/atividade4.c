#include <stdio.h>
void main()
{
    int n, soma;
    soma = 0;
    for (int i = 0; i < 4; i++)
    {
        printf("Escreva um numero:");
        scanf("%d", &n);
        soma += n;
    }
    if (soma % 2 == 0)
    {
        printf("A soma dos números é par!");
    } else {
        printf("A soma dos números é ímpar!");
    }
}