#include <stdio.h>

#define TAM_MAX 10

void imprimir(int a[TAM_MAX])
{
    for (int i = 0; i < TAM_MAX; i++)
    {
        printf("%d ", a[i]);
    }

    printf("\n");
}
 

void main()
{
    int a[TAM_MAX];
    for (int i = 0; i < TAM_MAX; i++)
    {
        a[i] = TAM_MAX - i;
    }
    imprimir(a);

    for (int i = 0; i < TAM_MAX; i++)
    {
        a[i] = i * i;
    }
    imprimir(a);

    for (int i = 1; i <= TAM_MAX / 2; i++)
    {
        a[i] = i;
        printf("%d ", i);
    }
    for (int i = 1; i <= TAM_MAX/ 2; i++)
    {
        a[i] = i * TAM_MAX;
        printf("%d ",a[i]);
    }
    for (int i = 0; i <= TAM_MAX; i++)
    {
        a[i] = i * i + 3;
    }
    imprimir(a);
}