void lista_giocatori() {
  char nomeplayer[50];
  const int buffer = 100; //buffer per ogni riga
  FILE *file_pointer; //puntatore che punta al file.txt
  char riga_del_file[100]; //numero di righe
  char *p;
  file_pointer = fopen("codice.txt","r+"); //aprire il file in lettura e scrittura
  if(file_pointer == NULL) {
    printf("Errore nell'apertura del file.\n");
    exit(1);
  }
  printf("Inserire il nome del player: ");
  scanf("%s",nomeplayer);
  fprintf(file_pointer, "%s\n", nomeplayer);
}
