#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
  // repare no menor-igual
  for(int i = 1; i <= 100; i++) {
    printf("%d \n", i);
  }
}