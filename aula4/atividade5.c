#include <stdio.h>
void main()
{
    int qtde, num;
    printf("Quantos número você irá escrever?");
    scanf("%d", &qtde);
    for (int i = 0; i < qtde; i++)
    {
        printf("Escreva um número inteiro:");
        scanf("%d", &num);
        if (num < 0)
        {
            printf("\nEsse número é negativo!");
        }
        else if (num > 0)
        {
            printf("\nEsse número é positivo!");
        }
        else
        {
            printf("\nVocê digitou 0!");
        }
    }
}