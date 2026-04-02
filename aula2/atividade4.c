#include <stdio.h>
void main(){
    float num1, num2;
    printf("Escreva o primeiro valor(decimal):");
    scanf("%f",&num1);
    printf("Escreva o segundo valor(decimal):");
    scanf("%f",&num2);

    printf("\nEsse é o resultado da soma dos dois valores:%.3f",num1+num2);
    printf("\nEsse é o resultado da subtração dos dois valores:%.3f",num1-num2);
    printf("\nEsse é o resultado da multiplicação dos dois valores:%.3f",num1*num2);
    printf("\nEsse é o resultado da divisão dos dois valores:%.3f",num1/num2);
}