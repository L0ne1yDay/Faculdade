#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

long random(){
  int n;
  srand((unsigned)time(NULL));

  do {
    n=rand()%4;
  }while(n==0);

  return n;
}

int jokenpo() {
  setlocale(LC_ALL, "Portuguese");
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
      printf("\nVocê perdeu.\n");

    } if(user==2 && machine==1){
      printf("Papel > Pedra");
      printf("\nVocê venceu.\n");

    } if(user==1 && machine==3){
      printf("Pedra > Tesoura");
      printf("\nVocê venceu.\n");

    } if(user==3 && machine==1){
      printf("Tesoura < Pedra");
      printf("\nVocê perdeu.\n");

    } if(user==2 && machine==3){
      printf("Papel < Tesoura");
      printf("\nVocê perdeu.\n");

    } if(user==3 && machine==2){
      printf("Tesoura > Papel");
      printf("\nVocê venceu.\n");

    }

  }while(1);

  return(0);
}
