
/*
Software para inclusao de pacientes com Covid 19,
como requisito para o PIM IV, da Universidade Paulista - UNIP


Autores:



Data da cria��o:
�ltima atualiza��o:

*/
//==============================================================================
//--- Inclus�o das bibliotecas ---

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <windows.h>
#define SIZE 200

void cadastro ();

int main (void) {
     setlocale(LC_ALL,"portuguese");
    cadastro();
}
void cadastro ()

//Cadastro

char nome[40], rua[40], bairro[40], cidade[40], uf[3], email[40];
int tel [14], num[6], ddata[12], cpf[12];

   printf("\n\n ============ Software Selfcare ============\n");
    printf("\n Digite os Dados do Paciente:\n");
    fflush(stdin); //Limpa o buffer do teclado

    printf("\n Nome:");
    gets(nome);
    fflush(stdin);

    printf(" CPF:");
    gets(cpf);
    fflush(stdin);

    printf(" Data de Nascimento (XX/XX/XXX):");
    scanf ("%2d/%2d/%4d",&dia, &mes, &ano);
    fflush(stdin);

    printf(" Telefone:");
    scanf ("%d",&tel);
    fflush(stdin);

    printf("\n\n Digite o Endere�o:\n");
    printf("\n Rua:");
    gets(rua);
    fflush(stdin);

    printf(" Numero:");
    gets (num);
    fflush(stdin);

    printf(" Bairro:");
    gets(bairro);

    printf(" Cidade:");
    gets(cidade);

    printf(" Estado [UF]:");
    gets(uf);
    fflush(stdin);

    printf(" CEP:");
    gets (cep);
    fflush(stdin);

    printf("\n Email:");
    gets(email);
    fflush(stdin);

    printf("\n Data do diagnostico (XX/XX/XXX):");
    gets (ddata);
    fflush(stdin);
}
