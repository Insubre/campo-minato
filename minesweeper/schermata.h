void Schermata() {
  system("clear");
  green();
  bold();
  printf("╔═══════════════☻CAMPO MINATO☻══════════════╗\n");
  sleep(1);
  printf("║        PRODOTTO DA INSUBRIA GAMES         ║\n");
  printf("╠═══════════════════REGOLE══════════════════╣\n");
  sleep(1);
  printf("║     1 SE NEL QUADRATO APPARE UN NUMERO,   ║\n");
  printf("║       IL NUMERO APPARSO INDICA LA         ║\n");
  sleep(1);
  printf("║      QUANTITÀ DI BOMBE PRESENTI NEI       ║\n");
  printf("║       QUADRATI ADIACENTI COMPRESI         ║\n");
  sleep(1);
  printf("║            QUELLI IN DIAGONALE            ║\n");
  printf("║                                           ║\n");
  sleep(1);
  printf("║       2 SE NON APPARE NESSUN NUMERO       ║\n");
  printf("║      SIGNIFICA CHE NON CI SONO BOMBE      ║\n");
  sleep(1);
  printf("║       NEGLI OTTO QUADRATI ADIACENTI       ║\n");
  printf("║                                    Pag. 1 ║\n");
  sleep(1);
  printf("╚═══════════════════════════════════════════╝\n");
  reset();
  printf("[>]Premere un tasto per continuare...\n");
  printf("[>]");
  int cara = getchar(); //funzione per ricreare la system("PAUSE");
  system("clear");
  green();
  bold();
  printf("╔═══════════════════REGOLE══════════════════╗\n");
  sleep(1);
  printf("║     3 IL GIOCO FINISCE QUANDO TUTTE LE    ║\n");
  printf("║      CASELLE VUOTE SONO STATE TROVATE     ║\n");
  sleep(1);
  printf("║       OPPURE QUANDO SI SCHIACCIA UNA      ║\n");
  printf("║                    MINA                   ║\n");
  sleep(1);
  printf("║                                    Pag. 2 ║\n");
  sleep(1);
  printf("╚═══════════════════════════════════════════╝\n");
  reset();
  printf("[>]Premere un tasto per continuare...\n");
  printf("[>]");
  int car = getchar(); //funzione per ricreare la system("PAUSE");
  system("clear");
}
