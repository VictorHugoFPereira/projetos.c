#include <stdio.h>
#define TAM_MAX 5
int verificarQtd(int x, int a[TAM_MAX])
{
    int qtde=0;
    for (int i = 0; i < TAM_MAX; i++)
    {
        if (x == a[i])
        {
            qtde++;
        }
    }
    return qtde;
}
void main()
{
    int x, a[TAM_MAX];
    printf("Qual numero voce quer verificar a ocorrencia?");
    scanf("%d", &x);
    for (int i = 0; i < TAM_MAX; i++)
    {
        printf("Escreva os numeros:");
        scanf("%d", &a[i]);
    }
    printf("%d aparece %d vezes nessa sequencia!",x,verificarQtd(x, a));
}