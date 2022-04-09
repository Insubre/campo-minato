/*
colore       codice
black        30
red          31
green        32
yellow       33
blue         34
magenta      35
cyan         36
white        37
bold         1
underline    4
reset        0
*/
void bold() {
  printf("\x1B[1m");
}

void underline() {
  printf("\x1B[4m");
}

void red () {
  printf("\033[1;31m");
}

void yellow() {
  printf("\033[1;33m");
}

void green() {
  printf("\033[0;32m");
}

void cyan() {
  printf("\033[0;36m");
}

void white() {
  printf("\033[0;37m");
}

void black() {
  printf("\033[0;30m");
}

void blue() {
  printf("\033[0;34m");
}

void reset () {
  printf("\033[0m");
}
