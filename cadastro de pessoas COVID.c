/*
Software para inclusao de pacientes com Covid 19,
como requisito para o PIM IV, da Universidade Paulista - UNIP


Autores:



Data da criacao:
Ultima atualizacao:

*/
//==============================================================================
//--- Incluso das bibliotecas ---

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <windows.h>
#define SIZE 200


//Cadastro
char nome [SIZE] [50];
char email [SIZE] [50];
int cpf [SIZE];
int dia [3], mes [2],ano [4] ,idade[3];
char rua[40];
char numero [5];
char bairro[40];
char cidade[40];
char uf[3];
int cep [SIZE];
int tel1 [14], Tel2 [14];
int op;

void cadastro ();

int main (void) {
     setlocale(LC_ALL,"portuguese");
    cadastro();
}
void cadastro () {
    static int linha;
    do{
       printf("\n Seja bem vindo!\n");

       printf("\nDigite o nome:");
       scanf("%s",&nome[linha]);
       fflush(stdin);

       printf("\nDigite o email:");
       scanf("%s",&email[linha]);
       fflush(stdin);

       printf("\nDigite o cpf:");
       scanf("%d",& cpf [linha]);
       fflush(stdin);

       printf("\nData de Nascimento (XX/XX/XXX):");
       scanf ("%2d/%2d/%4d",&dia, &mes, &ano[linha]);
       fflush(stdin);

       printf("\n\n Digite o Endereco:\n");

       printf("\n rua:");
       scanf ("%s",&rua [linha]);
       fflush(stdin);

          printf(" \n Numero:\n");
      scanf ("\n%d",& numero[linha]);
      fflush(stdin);

        printf("\n Bairro:");
      scanf("\n%s",&bairro[linha]);
      fflush(stdin);

       printf(" Cidade:");
       scanf ("\n%s",&cidade[linha]);
       fflush(stdin);

     printf("\n Estado [UF]:");
     scanf("%s",&uf);
     fflush(stdin);

       printf("\n Digite o cep:");
       scanf("%d",&cep [linha]);

       printf("\nDigite 1 para continuar ou outro valor para sair");
       scanf("%d",&op);
       linha++;
    }while (op==1);


}



