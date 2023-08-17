#include <stdio.h>

int main(void){

    int x = 10;
    double y = 20.50;
    char z = 'a';

    int *pX; // Criei um ponteiro;
    pX = &x; // Eu acesso apenas o endereço (O endereço desse ponteiro está apontando para o endereço de X);
    // Ou seja, não tem o '*';
    // O ENDEREÇO QUE ESSE PONTEIRO ESTÁ APONTANDO;

    // int *pX = &x;
    // O valor do meu ponteiro é igual ao endereço de memória de X;
    // O VALOR QUE ESTE PONTEIRO ESTÁ APONTANDO;
    // Eu teria que fazer assim: *pX = x;

    double *pY = &y;
    char *pZ = &z;
    printf("%i", pY);
    
    double soma = *pX + *pY; 

    printf("\nO Endereco X = %i - Valor X = %i", pX, *pX);
    printf("\nO Endereco y = %i - Valor Y = %f", pY, *pY);
    printf("\nO Endereco Z = %i - Valor Z = %c", pZ, *pZ);
    printf("\nValor da soma %f: ", soma);

    int *resultado;
    resultado = (int *)6422272; // Preciso fazer um casting de inteiro para ponteiro;
    // Esse numero '6422272' é o endereço da variável 10;
    printf("\nValor da X %i: ", *resultado);
    // Ou seja, o endereço é acessado sem o '*';
    // CONCLUSÃO: Para acessar o valor do meu ponteiro, eu preciso utilziar o *; 
   
    return  0;
}   