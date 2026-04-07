#include <stdio.h>
void main()
{
    float preco, novo_preco;
    printf("Escreva o preço do produto:");
    scanf("%f", &preco);
    if (preco <= 0)
    {
        printf("Preço inválido!");
    }
    else if (preco < 100)
    {
        novo_preco = (preco * 0.1) + preco;
    }
    else if (preco <= 300)
    {
        novo_preco = (preco * 0.2) + preco;
    }
    else
    {
        novo_preco = (preco * 0.5) + preco;
    }
    printf("\nO preço com juros aplicado é:%.2f",novo_preco);
}