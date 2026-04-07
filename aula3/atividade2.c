#include <stdio.h>
void main(){
    #define PI 3.1415
    float a, b, c, d;
    printf("Escreva um número:");
    scanf("%f",&a);
    printf("Escreva um número:");
    scanf("%f",&b);
    printf("Escreva um número:");
    scanf("%f",&c);
    printf("Escreva um número:");
    scanf("%f",&d);
    
    printf("\nO valor da área do triangulo é:%.2f",b*c);
    printf("\nO perímetro deste retângulo é:%.2f",a+b+c+d);
    printf("\nA área do círculo:%.2f",PI*d*d);
    
   
}