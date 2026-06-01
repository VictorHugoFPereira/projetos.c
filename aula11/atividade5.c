#include <stdio.h>
#define TAM_MAX 10
void main()
{
    int a[TAM_MAX], maior, segundoMaior, terceiroMaior;
    maior = 0, segundoMaior = 0, terceiroMaior = 0;
    for (int i = 0; i < TAM_MAX; i++)
    {
        printf("Escreva um numero:");
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < TAM_MAX; i++){
        if (a[i] > maior)
        {
            terceiroMaior = segundoMaior;
            segundoMaior = maior; 
            maior = a[i]; 
        }
        else if (a[i] > segundoMaior)
        {
            terceiroMaior = segundoMaior;
            segundoMaior = a[i];
        }
        else if (a[i] > terceiroMaior)
        {
            terceiroMaior = a[i];
        }
    }

    
    printf("%d %d %d", maior, segundoMaior, terceiroMaior);
}