#include <stdio.h>
void main(){
    int a, b;
    printf("Escreva o dividendo:");
    scanf("%d",&a);
    printf("Escreva o divisor:");
    scanf("%d",&b);
    if(b==0){
        printf("Erro! O divisor é 0.");
    } else {
        printf("O valor da divisão é:%d",a/b);
    }
}