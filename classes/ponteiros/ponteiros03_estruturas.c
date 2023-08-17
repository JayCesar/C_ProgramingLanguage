#include <stdio.h>

int main(void){

    struct horario{
        int hora;
        int minuto;
        int segundo;
    };

    struct horario agora, *depois;
    // O *depois é um ponteiro para uma estrutura do tipo horário;

    depois = &agora;

    (*depois).hora = 20;
    // Na linguagme C também existe ma precedenca de sinais, logo o ponto '.' vem
    // antes do asterisco (*);
    // Seria algo assim: *(depois.hora) = 20 - o que ainda está incorreto;
    // e por isso temos que dizer que queremos que seja feito primeir a parte do (*depois)
    // Pois eu quero que seja assim: (*depois).hora = 20;

    // Só que isso dá muito trabalho, por isso existe o atalho: ->

    depois->hora = 30;
    depois->minuto = 40;
    depois->segundo = 30;

    printf("\n%i %i %i", agora.hora, agora.minuto, agora.segundo);

    // Eu quero alterar esses valores utilizando o ponteiro:

    return 0;
}   