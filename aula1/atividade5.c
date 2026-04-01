#include <stdio.h>
void main(){
    int num;
    for(int i = 0; i<10; i++){
        printf("\nEscreva um número:");
        scanf("%d",&num);
        if(num>0){
            printf("\nEsse númeroo é positivo!");
        } else if(num<0){
            printf("\nEsse número é negativo!");
        } else {
            printf("Você digitou 0!");
        }
    }
}