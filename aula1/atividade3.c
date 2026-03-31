#include <stdio.h>
void main()
{
    char *nome[50];
    int idade;
    printf("Escreva seu nome:");
    scanf("%s", &nome);
    printf("Escreva sua idade:");
    scanf("%d", &idade);

    if(idade<0){
        printf("Idade inválida");
    } else if(idade<=13){
        printf("Você é criança");
    } else if(idade<=18){
        printf("Você é adolescente");
    } else {
        printf("Você é adulto");
    }
}