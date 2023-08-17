#include <stdio.h>

void testeVariavel(int x){ // É apenas uma cópia, ou seja, é outro endereço de memória;
    ++x; // Adiciona um;
    printf("%i\n", x);
}

void testePonteiro(int *pX){
    ++*pX; // Adiciona um ao valor da função;
    // Aqui eu vou direto na fonte
}

int main(void){

    // void testeVariavel(int x);
    // void testePonteiro(int *pX);
    int teste = 1;
    int *pTeste = &teste;

    testeVariavel(teste);
    testePonteiro(pTeste);
    // O parâmetro espera um argumento do tipo ponteiro;

    printf("%i\n", teste);

    // Quando nós passamos uma função que recebe como argumento uma variável, 
    // uma cópia é feita e é passada como argumento (e não o valor em sí);

    // 

    return 0;
}   