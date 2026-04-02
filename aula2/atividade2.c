#include <stdio.h>
void main()
{
    char *nome;
    int idade;
    float altura;
    printf("Escreva seu nome:");
    scanf("%s", &nome);
    printf("Escreva sua idade:");
    scanf("%d", &idade);
    printf("Escreva sua altura:");
    scanf("%f", &altura);

    printf("\nSeu nome é:%s\nSua idade é:%d\nSua altura é:%1.2f", &nome, idade, altura);
}
