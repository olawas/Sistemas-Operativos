#include <stdio.h>

int main() {
  int resultado = 0;
  int i;
  for (i = 0; i <= 100; i++) {
    if (i % 2 == 0) {
      resultado += i;
    }
  }

  printf("resultado de la suma es: %d", resultado);
  return 0;
}