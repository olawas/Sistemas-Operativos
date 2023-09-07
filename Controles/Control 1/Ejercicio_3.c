#include <stdio.h>

int main() {
  int lado1, lado2, lado3;

  printf("Ingrese el valor del primer lado: ");
  scanf("%d", &lado1);

  printf("Ingrese el valor del segundo lado: ");
  scanf("%d", &lado2);

  printf("Ingrese el valor del tercer lado: ");
  scanf("%d", &lado3);

  if (lado1 == lado2 && lado2 == lado3) {
    printf("Es un triangulo: Equilatero");
  } else if (lado1 != lado2 && lado1 != lado3 && lado2 != lado3) {
    printf("Es un trigangulo: Escaleno");
  } else if (lado1 == lado2 && lado1 != lado3 ||
             lado1 == lado3 && lado1 != lado2 ||
             lado2 == lado3 && lado2 != lado1) {
    printf("Es un triangulo Isoceles");
  }
  return 0;
}