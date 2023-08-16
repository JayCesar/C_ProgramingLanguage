#include <stdio.h>

int main(){

    float number, square;

    printf("Digite um numero: ");
    scanf("%f%*c", &number);

    square = number * number;

    printf("O numero %.2f e %.2f\n", number, square);

    return 0;
}