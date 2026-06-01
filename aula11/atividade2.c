#include <stdio.h>
#include <stdio.h>
#define TAM_MAX 10
void main()
{
    float a[TAM_MAX];
    for (int i = 0; i < TAM_MAX; i++)
    {
        printf("Escreva um valor:");
        scanf("%f", &a[i]);       
    }
    for (int i = 0; i < TAM_MAX; i++)
    {
        printf("%.2f ",a[i]);             
    }
    
}