 // Variaveis

#include <stdio.h>
// É uma biblioteca do C para lidar com entrada e saída padrão (teclado e monitor);

int main(){ // A chave delimita um bloco de código;
	// Declarando variáveis
	int idade; // Inteiro

	// Declarando e inicializando;
	// int idade = 0;

	// Função para escrever algo
	printf("Qual e a sua idade ?"); // O ';' finalizada um comando;
	scanf("%d", &idade);

	// Saída
	printf("A sua idade e %d", idade);

	// Recebendo dados
	// O 'scanf' recebe os dados da entrada padrão (o teclado);
	// '%d' indica que é um inteiro!

	return 0;
    // Um programa C não é multiplataforma, ou seja, ele só roda no Sistema Operacional onde ele é compilado.

}
