#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>
#include <string.h>
#include <time.h>
#include <ctype.h>

int main ()
{
    int opcao, resp;

    while(opcao != 5)
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
        scanf ("%d", &opcao);

        switch(opcao)
        {
        //JOGO DA FORCA - POR MATEUS DE ASSIS
        case 1:
        system("C:\\Users\\Gabriel\\Downloads\\AP2_PROJETO_INTEGRADO_I\\FORCA\\J.FORCA.exe");
		break;
        //ALTERE O CAMINHO ACIMA, CONFORME O DESTINO DO ARQUIVO JOGO2 NA SUA MÁQUINA.

        //JOGO DA VELHA - POR GABRIEL RODRIGUES
        case 2:
        system("C:\\Users\\Gabriel\\Downloads\\AP2_PROJETO_INTEGRADO_I\\VELHA\\J.VELHA.exe");
		break;
        //ALTERE O CAMINHO ACIMA, CONFORME O DESTINO DO ARQUIVO JOGO2 NA SUA MÁQUINA.

        //JOKENPO - POR EDGAR GOMES
        case 3:
        system("C:\\Users\\Gabriel\\Downloads\\AP2_PROJETO_INTEGRADO_I\\JOKENPO\\J.JOKENPO.exe");
		break;
        //ALTERE O CAMINHO ACIMA, CONFORME O DESTINO DO ARQUIVO JOGO2 NA SUA MÁQUINA.

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
