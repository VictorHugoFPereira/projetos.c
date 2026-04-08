#include <stdio.h>
void main()
{
    int num, soma;
    soma = 0;
    for (int i = 0; i < 5; i++)
    {
        printf("Escreva um número inteiro:");
        scanf("%d", &num);
        soma += num;
    }
    printf("A soma dos 5 números é:%d", soma);
}