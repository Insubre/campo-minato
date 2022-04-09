#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <unistd.h>
#include <string.h>
#include <time.h>
#include "colore.h"
#include "schermata.h"
#include "file.c"
#include "file2.c"
#include "gioco.c"

#define D 8
#define N 10 //numero di mine presenti nel campo


int main() {

  srand(time(NULL));

  int contatore=0;
  int contavitt=0;
  bool risultato;
  char campo[D][D];
  int campo2[D][D];
  int x, y;

  //inizializzazione del campo visibile
  for(int i=0; i<D; i++) {
      for(int j=0; j<D; j++) {
          campo[i][j]='#';
      }
  }

  //inizializzazione del invisibile
  for(int i=0; i<D; i++) {
      for(int j=0; j<D; j++) {
          campo2[i][j]=0;
      }
  }

  int n_mine = N;

  int x_mine=0;
  int y_mine=0;

  while(n_mine) {
  x_mine = rand() % 8 + 1;
  y_mine = rand() % 8 + 1;
  if(campo2[x_mine][y_mine] == 0) {
      campo2[x_mine][y_mine] = 1;
      n_mine --;
    }
  }

  Schermata();
  lista_giocatori();

  int k=getchar();
  system("clear");

  bold();
  cyan();
  for(int i=0; i<D; i++) {
      for(int j=0; j<D; j++) {
          printf("%c ",campo[i][j]);
      }
      printf("\n");
  }
/*
  printf("\n");

  for(int i=0; i<D; i++) {
      for(int j=0; j<D; j++) {
          printf("%d ",campo2[i][j]);
      }
      printf("\n");
  }*/
  reset();

  do {
    contatore ++;
    bold();
    yellow();
    scanf("%d %d",&x, &y);
    reset();
    bold();
    cyan();
    CampoMinato(campo, campo2, x, y, contatore, contavitt);
    risultato=CampoMinato(campo, campo2, x, y, contatore, contavitt);
  } while(risultato == true);


  reset();

  return 0;
}
