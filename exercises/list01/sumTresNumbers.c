#include <stdio.h>

int main(){

    int numbers[3], i, soma;

    for (i = 0; i < 3; i++){
        printf("Digite o valor do %d numero: ", i + 1);
        scanf("%d", &numbers[i]);
        soma += numbers[i];
    }   

    printf("O valor da soma e %d", soma);

    return 0;
}