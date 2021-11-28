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
    int i, j, linha, coluna, contador;
  	char matriz[3][3];

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
        printf("Digite o n�mero correspondente ao jogo!\n");
        scanf ("%d", &opcao);

        switch(opcao)
        {
        //JOGO DA FORCA - POR MATEUS DE ASSIS
        case 1:
        system("C:\\Users\\Gabriel\\Downloads\\AP2_PROJETO_INTEGRADO\\JOGO2\\bin\\Debug\\JOGO2.exe");
        //ALTERE O CAMINHO ACIMA, CONFORME O DESTINO DO ARQUIVO JOGO2 NA SUA M�QUINA.
        return 0;


        //JOGO DA VELHA - POR GABRIEL RODRIGUES
        case 2:

        for(i = 0; i < 3; i++){
		    putchar('\n');
		    for(j = 0; j < 3; j++){
			  putchar('\t');
			  matriz[i][j] = '-';
			  printf("%c", matriz[i][j]);
		}

	}

	for (contador = 0; contador < 9; contador++){

		printf("\n Insira a linha no qual constar� o simbolo: \n");
		scanf("%d", &linha);
		linha--;

		printf("\n Insira a coluna no qual constar� o s�mbolo: \n");
		scanf("%d", &coluna);
		coluna--;

		putchar('\n');
		if(matriz[linha][coluna] == '-'){

			if(contador%2){
				matriz[linha][coluna] = 'O';
			}
			else{
				matriz[linha][coluna] = 'X';
			}
			for(i = 0; i < 3; i++){
				putchar('\n');
				for(j = 0; j < 3; j++){
					putchar('\t');
					printf("%c", matriz[i][j]);
				}
				putchar('\n');
				putchar('\n');
			}
			if((matriz[0][0] == matriz[0][1] && matriz[0][0] == matriz[0][2] && matriz[0][0] != '-')||
			   (matriz[0][0] == matriz[1][1] && matriz[0][0] == matriz[2][2] && matriz[0][0] != '-')||
			   (matriz[0][0] == matriz[1][0] && matriz[0][0] == matriz[2][0] && matriz[0][0] != '-')||
			   (matriz[0][1] == matriz[1][1] && matriz[0][1] == matriz[2][1] && matriz[0][1] != '-')||
			   (matriz[0][2] == matriz[1][2] && matriz[0][2] == matriz[2][2] && matriz[0][2] != '-')||
			   (matriz[1][0] == matriz[1][1] && matriz[1][0] == matriz[1][2] && matriz[1][0] != '-')||
			   (matriz[2][0] == matriz[2][1] && matriz[2][0] == matriz[2][2] && matriz[2][0] != '-')||
			   (matriz[2][0] == matriz[1][1] && matriz[2][0] == matriz[0][2] && matriz[2][0] != '-')){

				printf("Jogador %d ganhou!", (contador%2) + 1);
				exit(0);
			}
		}
		else{
			printf("\n O espa�o j� esta ocupado, escolha um local v�lido.\n");
			contador--;
		}
	}

	printf("\n O jogo acabou empatado!");
	break;

        //JOKENPO - POR EDGAR GOMES
        case 3:
            {
    long random(){
    int n;
    srand((unsigned)time(NULL));

  do {
    n=rand()%4;
  }while(n==0);

  return n;
}

  char choices[4][20] = {"","Pedra ", "Papel ", "Tesoura "};
  const int paper = 2;
  const int scissors = 3;
  int user, machine;

  for(int i=0;i<4;i++){
    printf("%s",choices[i]);

  }

  printf("\nEscolha entre pedra, papel e tesoura.");
  printf("\n1=Pedra");
  printf("\n2=Papel");
  printf("\n3=Tesoura");
  printf("\n0=Sair\n");

  do{
    do{
      printf("\nSua jogada: ");
      scanf("%d",&user);
    } while(user!=1 && user!=2 && user!=3 && user!=0);

    if(user == 0){
      break;
    }
    srand((unsigned)time(NULL));
    machine = random();

    if(user == machine){
      printf("%s = %s",choices[user], choices[machine]);
      printf("\nEmpate\n");

    } if(user==1 && machine==2){
      printf("Pedra < Papel");
      printf("\nVoc� perdeu.\n");

    } if(user==2 && machine==1){
      printf("Papel > Pedra");
      printf("\nVoc� venceu.\n");

    } if(user==1 && machine==3){
      printf("Pedra > Tesoura");
      printf("\nVoc� venceu.\n");

    } if(user==3 && machine==1){
      printf("Tesoura < Pedra");
      printf("\nVoc� perdeu.\n");

    } if(user==2 && machine==3){
      printf("Papel < Tesoura");
      printf("\nVoc� perdeu.\n");

    } if(user==3 && machine==2){
      printf("Tesoura > Papel");
      printf("\nVoc� venceu.\n");

    }

  }while(1);

  return(0);
  }


        /* SAIR */
        case 4:

         printf("Voc� Deseja Sair? 1=SIM / 0=NAO: \n");
		     scanf("%d", &resp);
         if (resp == 0)
         {
          break;
         }
         else
         printf ("Voc� Saiu!\n");
         return 0;

        }
    }
}
