#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>
#include <string.h>
#include <time.h>
#include <ctype.h>

void printScreen(int errors)
{
    printf("\n||############");
    printf("\n||           *");
    printf("\n||           *");
    printf("\n||           -");

    printBodyByNumberOfErrors(errors);

    printf("\n||");
    printf("\n||");
    printf("\n****************\n");
}

void printBodyByNumberOfErrors(int errors)
{
	char members[6] = {'O', 47, 124, 92, 47, 92};
	char membersByErrors[6] = {0, 0, 0, 0, 0, 0};

	int i = 0;

	while (i <= errors-1)
	{
		membersByErrors[i] = members[i];
		i ++;
	}

	printf("\n||           %c", membersByErrors[0]);
	printf("\n||          %c%c%c", membersByErrors[1], membersByErrors[2], membersByErrors[3]);
	printf("\n||          %c %c", membersByErrors[4], membersByErrors[5]);
}

char* setRandomWord(char* word)
{
    char nome[][20]={"OVAL", "PEIXE", "CORUJA", "GERME", "CACHORRO", "CANIBAL", "ESGRIMA", "TURQUIA", "TONELADA", "ACAMPAMENTO"};
    srand((unsigned)time(NULL));
    int n = rand() % 10;

    strcpy(word,nome[n]);
}

void hideWord(char* word)
{
    int count = 0,wordLen=strlen(word);
    char hiden[20]="";

    while(count < wordLen)
    {
        strcat(hiden,"_");
        count++;
    }

    strcpy(word,hiden);
}

bool letterExists(char word, char str[20], char* hide)
{
    for(int i=0;i<strlen(str);i++)
    {
        if(word == str[i])
        {
            hide[i]=str[i];
            return true;
        }
    }
    return false;
}

void playGame(){
    char word[20];
    char hide[20];
    char letterList[10];
    int errors = 0, count=0;
    bool gameIsOn = true;
    char letter;

    setRandomWord(word);
    strcpy(hide,word);
    hideWord(hide);

    while(gameIsOn)
    {
        printScreen(errors);
        printf("Palavra: ");

        for(int i=0;i<strlen(hide);i++)
        {
            printf("%c ",hide[i]);
        }

        printf("\nNúmero de erros: ");
        printf("%i",errors);
        printf("\nLetras erradas: ");

        for(int i=0;i<count;i++)
        {
            printf("%c ",letterList[i]);
        }

        printf("\nDigite uma letra:");
        scanf(" %c",&letter);
        letter = toupper(letter);

        for(int i=0;i<count;i++)
        {
            if(letter==letterList[i])
            {
                printf("\nLetra já foi digitada, digite outra:");
                scanf(" %c",&letter);
                letter = toupper(letter);
                i=-1;
            }
        }

        if(!letterExists(letter,word,hide))
        {
            errors = errors+1;
            letterList[count] = letter;
            count++;
        }

        system("cls");

        if(errors == 6)
        {
            gameIsOn = false;
            printScreen(errors);
            printf("\nVocê perdeu!\n");
        }
        else if(strcmp(word,hide) == 0)
        {
            gameIsOn = false;
            printScreen(errors);
            printf("\nMuito bem! Você acertou!\n");
        }
    }

    fflush(stdin);
    printf("Pressione qualquer tecla para sair...\n");
    getchar();
}

void setLocaleBrazil()
{
    setlocale(LC_ALL, "Portuguese");
    SetConsoleCP(1252);
    SetConsoleOutputCP(1252);
}

int forca()
{
    setLocaleBrazil();
    playGame();
}
