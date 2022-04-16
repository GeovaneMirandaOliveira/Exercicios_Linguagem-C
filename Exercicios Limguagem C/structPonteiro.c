#include <stdio.h>
#include <stdlib.h>

// Usando typedef  na struct para encurtar o comdando na declaração

//Declaração Global de struct
typedef struct
{
    int matricula;
    float nota;
} tAluno;

//Programa Principal
int main(void)
{

    system("color f1");
    //a1 é uma strut do tipo aluno
    tAluno a1;

    // ptrAluno e um ponteiro do tipo aluno que recebe o endereço a1
    tAluno *ptrAluno = &a1;

    a1.matricula = 555;
    a1.nota = 5.0;

    // Exibindo dados usando struct diretamente
    printf("matricula: %d nota: %.2f\n", a1.matricula, a1.nota);

    //Podemos atribuir ou acessar um valor usando o ponteiro (*ptrAluno)
    (*ptrAluno).nota = 5.5;

    //exibindo dados usando um ponteiro para atruct
    printf("\nmatricula: %d  nota: %.2f\n", (*ptrAluno).matricula, (*ptrAluno).nota);

    // ptrAluno -> substitui a notação (*ptrAluno). de forma mais intuitiva
    //atribui um novo valor para a nota usando ptrAluno->
    ptrAluno->nota = 5.0;

    //portanto (*ptrAluno).nota e o mesmo q usar ptrAluno->nota
    printf("\nmatricula: %d nota: %.2f\n\n\n", ptrAluno->matricula, ptrAluno->nota);

    if (ptrAluno->nota >= 6)
    {
        printf("\nAprovado\n\n\n");
    }
    else
    {
        printf("\nReprovado\n\n\n");
    }

    char nome1[16];

    printf("Digite seu nome:");
    //nome1 (variavel) , 15 quantidade de caracteres , stdin (leitura do teclado)
    fgets(nome1, 16, stdin); // leitura de uma string

    printf("Bem vindo %s\n", nome1);

    system("pause"); //Parada de tela so para Windows
    return 0;
}