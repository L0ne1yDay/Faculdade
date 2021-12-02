#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int jogoDaVelha()
{
    setlocale(LC_ALL, "Portuguese");
    int i, j, linha, coluna, contador;
  	char matriz[3][3];

 for(i = 0; i < 3; i++){
		    putchar('\n');
		    for(j = 0; j < 3; j++){
			  putchar('\t');
			  matriz[i][j] = '-';
			  printf("%c", matriz[i][j]);
		}

	}

	for (contador = 0; contador < 9; contador++){

		printf("\n Insira a linha no qual constará o simbolo: \n");
		scanf("%d", &linha);
		linha--;

		printf("\n Insira a coluna no qual constará o símbolo: \n");
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
			printf("\n O espaço já esta ocupado, escolha um local válido.\n");
			contador--;
		}
	}

	printf("\n O jogo acabou empatado!");
	return 0;
}
