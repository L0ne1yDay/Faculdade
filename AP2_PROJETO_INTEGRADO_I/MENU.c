#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>
#include <string.h>
#include <time.h>
#include <ctype.h>
#include "FORCA/FORCA.c"
#include "J.VELHA/J.VELHA.c"
#include "JOKENPO/JOKENPO.c"

void printMenu(int opcao)
{
    printf("****  Bem-vindos ao FCDL-Games *****  \n");
    printf("\n");
    printf("*************** JOGOS **************  \n");
    printf("1 - Forca                             \n");
    printf("2 - Jogo da Velha                     \n");
    printf("3 - JokenPO                           \n");
    printf("4 - Sair                              \n");
    printf("************************************  \n");
    printf("\n");
    printf("Digite o número correspondente ao jogo!\n");
}

int main ()
{
    setlocale(LC_ALL, "Portuguese");
    int opcao, resp;

    while(opcao != 5)
    {
        printMenu(opcao);
        scanf ("%d", &opcao);

        switch(opcao)
        {
        //JOGO DA FORCA - POR MATEUS DE ASSIS
        case 1:
        system("cls");
        forca();
		break;

        //JOGO DA VELHA - POR GABRIEL RODRIGUES
        case 2:
        system("cls");
        jogoDaVelha();
		break;

        //JOKENPO - POR EDGAR GOMES
        case 3:
        system("cls");
        jokenpo();
		break;

        //SAIR
        case 4:

         printf("Você Deseja Sair? 1=SIM / 0=NAO: \n");
		     scanf("%d", &resp);
         if (resp == 0)
         {
          break;
         }
         else
         printf ("Você Saiu!\n");
         return 0;

        }
    }
}
