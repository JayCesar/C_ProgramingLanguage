// Estrutura que posuem ponteiros
#include <stdio.h>

int main(void){

    struct horario{
        int *pHora;
        int *pMinuto;
        int *pSegundo;
    };

    struct horario hoje;

    int hora = 200;
    int minuto = 300;
    int segundo = 400;

    hoje.pHora= &hora;
    hoje.pMinuto= &minuto;
    hoje.pSegundo= &segundo;

    printf("Hora - %i\n", *(hoje.pHora));
    printf("Minuto - %i\n", *hoje.pMinuto);
    printf("Segundo - %i\n", *hoje.pSegundo);

    *hoje.pSegundo = 1000;
    printf("Segundo - %i\n", *hoje.pSegundo);



    // struct horario agora, *depois;
    // depois = &agora;

    // depois->hora = 20;
    // depois->minuto = 40;
    // depois->segundo = 30;

    // int somatorio = 100;

    // struct horario antes;

    // antes.hora = somatorio + depois->segundo;
    // antes.minuto = agora.hora + depois->minuto;
    // antes.segundo = depois->minuto + depois->segundo;


    // printf("\n%i %i %i", antes.hora, antes.minuto, antes.segundo);

    return 0;
}   