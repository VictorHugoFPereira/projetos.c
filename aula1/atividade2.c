#include <stdio.h>
void main(){
    char* jogador1[50], jogador2[50];
    int idade1, idade2;
    printf("Escreva o nome do jogador 1:");
    scanf("%s",&jogador1);
    printf("Escreva o nome do jogador 2:");
    scanf("%s",&jogador2);
    printf("Escreva a idade do jogador 1:");
    scanf("%d",&idade1);
    printf("Escreva a idade do jogador 2:");
    scanf("%d",&idade2);
    if(idade1>idade2){
        printf("A idade do %s é a maior, ele tem:%d anos",jogador1,idade1);
    }else if(idade2>idade1){
        printf("A idade do %s é a maior, ele tem:%d anos",jogador2,idade2);
    } else {
        printf("Vocês tem a mesma idade!");
    }
    
}