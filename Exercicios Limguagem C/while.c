#include <stdio.h>
int main(void)
{
  int contador = 1; //declarando e inicializando a variável de controle
  
  while (contador <= 200) // Testando a condição
  {
    printf("%d ", contador * 2); //Executando um comando dentro do laço
    
    contador++; //atualizando a variável de controle
  }  
  
  return 0;
}