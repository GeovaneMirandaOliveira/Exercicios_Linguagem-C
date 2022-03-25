#include <stdio.h>
#include <stdlib.h>
#include <time.h> // trabalha com medição de tempo
#include <locale.h>
/* 
          JokenPO
 */

	//Declaracao das variaveis
	int jogador;
	int computador;
	
	
int main()
{
	
do
{

	
	system("color 1f");
	setlocale(LC_ALL,"");
	

	
	//painel do jogo
	printf("\n ********JokenPo********\n");
	printf("1-Pedra\n");
	printf("2-Papel\n");
	printf("3_Tesoura\n");
	printf("4-Sair do jogo\n");
	
	
	// Escolher opção
	printf("\nDigite a opção desejada:");
	scanf("%d", &jogador);	

	printf("\n------------------------------------------\n");
	
	switch(jogador){
		case 1:
			printf("jogador escolheu PEDRA\n");
			break;
			
		case 2:
			printf("Jogador escolheu PAPEL\n");
			break;
			
		case 3:
			printf("Jogador escolheu TESOURA\n");
			
		default:
			break;
	}
	
	//system("color 5E");
	srand(time(NULL));// inicia girador de numeros aleatorios
	computador = rand()%3 + 1; // %3 gera numeros aleatorios entre 1 e 3
	
	switch(computador){
		
		case 1:
			printf("Computador escolheu PEDRA\n");
			break;
			
		case 2:
			printf("Computador escolheu PAPEL\n");
			break;
			
		case 3:
			printf("Computador escolheu TESOURA\n");
			
		default :
			break;
			
	}
	
	// ESTRUTUTA DE DECISÃO
	if(jogador == 1 && computador == 1){
		printf("EMPATE\n");
	}else if(jogador == 1 && computador == 2){
		printf("Computador VENCEU\n");
	}else if(jogador == 1 && computador == 3){
		printf("Jogador VENCEU\n");
	}else if(jogador == 2 && computador == 1){
		printf("Jogador VENCEU\n");
	}else if(jogador == 2 && computador == 2){
		printf("EMPATE\n");
	}else if(jogador == 2 && computador == 3){
		printf("Computador VENCEU\n");
	}else if(jogador == 3 && computador == 1){
		printf("Computador VENCEU\n");
	}else if(jogador == 3 && computador == 2){
		printf("Jogador VENCEU\n");
	}else if(jogador == 3 && computador == 3){
		printf("EMPATE\n");
	}
	
	
	system("pause");
	system("cls");
	
}while(jogador != 4);
	system("pause");
	
	
	

	
	return 0;
	

}

