// TODO: apri_mine();
#define D 8

char player();
int ContaMine(int x, int y, int campo2[D][D]);
//void apri_mine(int x, int y, char campo[D][D], int campo2[D][D]);

bool CampoMinato(char campo[D][D], int campo2[D][D], int x, int y, int contatore, int contavitt) {

  //posizionamento del player
  for(int i=0; i<D; i++) {
    for(int j=0; j<D; j++) {
      if(i==x && j==y) {
        campo[i][j]=player(x, y, campo2);
      }
    }
  }


  for(int i=0; i<D; i++) {
    for(int j=0; j<D; j++) {
      if(i==x && j==y) {
        if(campo2[i][j]==1){
          system("clear");
          bold();
          red();
          printf("BOOM\n");
          reset();
          printf("premere un taso per continuare...\n");
          int carac = getchar();
          return false; //quando si seleziona una mina, restituisce false
          break;
        }
      }
    }
  }

  ContaMine(x, y, campo2);
  //apri_mine(x, y, campo, campo2);


  for(int i=0; i<D; i++) {
    for(int j=0; j<D; j++) {
      if(campo[i][j] != '#') {
        contavitt ++;
      }
    }
  }

  file(contavitt);

  if(contavitt == 64-10) {
    system("clear");
    bold();
    green();
    printf("HAI VINTO!\n");
    reset();
    printf("premere un taso per continuare...\n");
    int caract = getchar();
    return(false);
  }

  system("clear");

  for(int i=0; i<D; i++) {
      for(int j=0; j<D; j++) {
          printf("%c ",campo[i][j]);
      }
      printf("\n");
  }

  printf("\n");

  /*for(int i=0; i<D; i++) {
      for(int j=0; j<D; j++) {
          printf("%d ",campo2[i][j]);
      }
      printf("\n");
  }*/

}

int ContaMine(int x, int y, int campo2[D][D]) {
  /*
  METODO DI CONTA DELLE MINE NEI PRESSI DELLA CASELLA
   no  n   ne       n(x-1,y) || no(x-1,y-1)
    \  |  /         s(x+1,y) || ne(x-1,y+1)
     \ | /          e(x,y+1) || so(x+1,y-1)
  o---pos---e       o(x,y-1) || se(x-1,y+1)
     / | \
    /  |  \
  so   s   se
  */

  int conta=0;
  //==============NORD=============//
  if(campo2[x-1][y]==1) conta ++;
  //==============SUD==============//
  if(campo2[x+1][y]==1) conta ++;
  //==============EST==============//
  if(campo2[x][y+1]==1) conta ++;
  //=============OVEST=============//
  if(campo2[x][y-1]==1) conta ++;
  //==============N.O=============//
  if(campo2[x-1][y-1]==1) conta ++;
  //==============N.E=============//
  if(campo2[x-1][y+1]==1) conta ++;
  //==============S.O=============//
  if(campo2[x+1][y-1]==1) conta ++;
  //==============S.E=============//
  if(campo2[x+1][y+1]==1) conta ++;
  return conta;
}
/*
void apri_mine(int x, int y, char campo[D][D], int campo2[D][D]) {
    if(campo2[x-1][y-1] == 0) campo[x-1][y-1] = ContaMine(x-1, y-1, campo2) + 0;
    if(campo2[x-1][y] == 0) campo[x-1][y] = ContaMine(x-1, y, campo2) + 0;
    if(campo2[x-1][y+1] == 0) campo[x-1][y+1] = ContaMine(x-1, y+1, campo2) + 0;
    if(campo2[x][y-1] == 0) campo[x][y-1] = ContaMine(x, y-1, campo2) + 0;
    if(campo2[x][y+1] == 0) campo[x][y+1] = ContaMine(x, y+1, campo2) + 0;
    if(campo2[x+1][y-1] == 0) campo[x+1][y-1] = ContaMine(x+1, y-1, campo2) + 0;
    if(campo2[x+1][y] == 0) campo[x+1][y] = ContaMine(x+1, y, campo2) + 0;
    if(campo2[x+1][y+1] == 0) campo[x+1][y+1] = ContaMine(x+1, y+1, campo2) + 0;
}
*/

char player(int x, int y, int campo2[D][D]) {
  int mine = ContaMine(x, y, campo2);
  char ris = (char)mine + 48;
  if(ris=='0') ris = ' ';
  return ris;
}
