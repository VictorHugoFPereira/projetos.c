#include <stdio.h>
#define TAM_MAX 5
int verificarNegativos(int n, int a[TAM_MAX])
{
    int qtde = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] < 0)
        {
            qtde++;
        }
    }
    return qtde;
}
void main()
{
    int a[TAM_MAX]={1, 0, -5, -2, -3};
    printf("%d", verificarNegativos(TAM_MAX, a));
}