#include <stdio.h>
void main()
{
    int num;
    printf("Escreva um número inteiro:");
    scanf("%d", &num);
    if (num % 2 == 0)
    {
        printf("Esse número é par!");
    }
    else
    {
        printf("Esse número é ímpar!");
    }
}