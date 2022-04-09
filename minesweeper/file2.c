void file(int punteggio) {
  const int b = 100; //buffer per ogni riga
  FILE *f_p; //puntatore che punta al file.txt
  char r_d_f[100]; //numero di righe
  char *p2;
  f_p = fopen("file.txt","r+"); //aprire il file in lettura e scrittura
  if(f_p == NULL) {
    printf("Errore nell'apertura del file.\n");
    exit(1);
  }
  fprintf(f_p, "%d\n", punteggio);
  while(!feof(f_p))
  {
      p2=fgets(r_d_f, b, f_p); //leggere la riga del file
      if(p2!=NULL) {
        printf("%s \n",r_d_f); //stampare la riga del file
      }
  }
  fclose(f_p);
}
