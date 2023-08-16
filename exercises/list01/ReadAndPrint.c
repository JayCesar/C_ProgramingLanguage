#include <stdio.h>

// Faça um programa que leia um número inteiro e imprima;
int main(){
    int number;
    printf("Digite um numero: ");
    scanf("%d", &number); // Colocar o endereço da memória (&)

    // Printing
    printf("This is the number %d", number);
    return 0;
}