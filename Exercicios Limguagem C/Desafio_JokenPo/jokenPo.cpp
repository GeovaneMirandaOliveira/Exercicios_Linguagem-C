#include <stdio.h>
#include <stdlib.h>
#include <time.h> // trabalha com medição de tempo
#include <locale.h>
/* 
          JokenPO
 */





int main()
{
	//Declaracao das variaveis
	system("color 1B");
	setlocale(LC_ALL,"");
	
	int jogador;
	int computador;
	
	//painel do jogo
	printf("\n ********JokenPo********\n");
	printf("1-Pedra\n");
	printf("2-Papel\n");
	printf("3_Tesoura\n");
	
	
	// Escolher opção
	printf("\nDigite a opção desejada:");
	scanf("%d", &jogador);	
	
	printf("\n------------------------------------------\n");
	
	printf("Jogador escolheu %d", jogador);
	//system("color 5E");
	srand(time(NULL));// inicia girador de numeros aleatorios
	//printf("computador %d", rand()%3 + 1); // %3 gera numeros aleatorios entre 1 e 3
	printf("\n\n");
	if((" %d", rand()%3 + 1) == 1){
		printf("computador escolheu Pedra\n");
		printf("Computador Venceu\n");
	}else if(jogador == 1)
	{
		printf("Computador escolheu PEDRA");
		printf("Empate\n");
	}else if(jogador == 2)
	{
	
		printf("Computador escolheu PAPEL");
		printf("Jogador VENCEU\n");
	}else if(jogador == 3)
	{
		printf("Jogador escolheu TESOURA");
		printf("Computador VENCEU\n");
	}
	
	
	
	system("pause");
	
	
	
	return 0;
}

