#include <stdio.h>
void main(){
    float notatrab, notaprov, notateste, notafinal;
    printf("Escreva a nota do seu trabalho(de 0 a 10):");
    scanf("%f",&notatrab);
    printf("Escreva a nota da sua prova(de 0 a 10):");
    scanf("%f",&notaprov);
    printf("Escreva a nota do seu teste(de 0 a 10):");
    scanf("%f",&notateste);

    printf("Sua nota final do semestre é:%.2f",(notatrab*0.1)+(notaprov*0,6)+(notateste*0,3));
}