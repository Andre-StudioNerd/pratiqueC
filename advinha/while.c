#include <stdio.h>
#include <locale.h>


int main() {
  setlocale(LC_ALL, "Portuguese");
  int numero = 1;
  while(numero <= 100) {
    printf("%d\n ", numero);
    numero++;
  }
}