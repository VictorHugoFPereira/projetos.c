#include <stdio.h>
void main()
{
    int num, soma, produto;
    soma = 0;
    produto = 1;
    for (int i = 0; i < 5; i++)
    {
        printf("Escreva um número:");
        scanf("%d",&num);
        soma+=num;
        produto*=num;
    }
    printf("\nA soma dos 5 números é:%d",soma);
    printf("\nO produto dos 5 números é:%d",produto);
}