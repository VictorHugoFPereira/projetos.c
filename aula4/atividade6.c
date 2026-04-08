#include <stdio.h>
void main()
{
    int soma;
    soma = 0;
    for (int i = 0; i <= 37; i++)
    {
        soma += i;
    }
    printf("A soma dos números de 0 a 37 é:%d", soma);
}