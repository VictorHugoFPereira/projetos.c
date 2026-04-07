#include <stdio.h>
void main()
{
    float preco;
    printf("Escreva o preço do produto:");
    scanf("%f", &preco);
    if (preco <= 0)
    {
        printf("Preço inválido!");
    }
    else if (preco <= 30)
    {
        printf("Preço baixo!");
    }
    else if (preco <= 50)
    {
        printf("Preço médio!");
    }
    else
    {
        printf("Preço alto!");
    }
}