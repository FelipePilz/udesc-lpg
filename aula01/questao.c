#include <stdio.h>

int main() {
    int num1 = 0, 
        num2 = 0;
    printf("Insira um número:");
    scanf("%d", &num1);
    printf("Insira outro número:");
    scanf("%d", &num2);
    printf("A soma de %d + %d é igual a %d",num1,num2,num1 + num2);
    return 0;
}


