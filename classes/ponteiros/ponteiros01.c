#include <stdio.h>

int main(void){

    int x;
    // Reservei no meu computador um espaço para armazenar um valor inteiro;
    x = 10;
    // Nesse espaço de memória eu 'joguei' o 10;

    printf("%i\n", x);
    // Ok, mas como acessar o endereço?
    // Basta eu adicionar o '&' na frente da variávels que eu terei acesso
    // ao endereço da memória que contém esse 10;
    printf("%i\n", &x);

    // AGORA vou criar um ponteiro;
    // Eu preciso dizer que tipo de dado meu ponteiro irá apontar:
    int *ponteiro; // Acabei de criar um ponteiro que tá apontando para um valor inteiro; (famoso X9);
    /* printf("%i\n", ponteiro); (Aqui ele nã está apontando pra nenhum lugar) */

    ponteiro = &x;
    // Agora essa variável do tipo ponteiro está apontando para o endereço espaço de memória
    // da variável x;
    printf("%i", *ponteiro);
    // OU SEJA quando eu adiciono o '*' na frente, eu acesso o valor do endereço de memória
    // Mas quando eu NÃO adiciono '*' eu na frente, eu acesso apenas o endereço de memória.
    // O mesmo se aplica para o '&'; (IMPORTANTE);

    int a = 10;
    int b = a;

    a = 20;

    printf("\n%i %i", a, b);

    // Agora com ponteiros:
    int *ponteiro01; 
    ponteiro01 = &x; // x vale 10 aqui

    int y = 20;
    *ponteiro = y; // O valor do meu ponteiro será o valor de y, que é 20;
    printf("\n%i", *ponteiro);




    // getchat();
    return  0;
}   


// #include <stdio.h>

// int main(void){

//     getchat();
//     return  0;
// }   