#include <stdio.h>

int main() {
  int lado1, lado2, lado3;

  printf("Ingrese el valor del primer lado: ");
  scanf("%d", &lado1);

  printf("Ingrese el valor del segundo lado: ");
  scanf("%d", &lado2);

  printf("Ingrese el valor del tercer lado: ");
  scanf("%d", &lado3);

  int perimetro = lado1 + lado2 + lado3;
  int s = (lado1 + lado2 + lado3)/2;
  int area = sqrt(s*(s-lado1)*(s-lado2)*(s-lado3));
  print("El perimetro del triangulo es: %d \n El semiperimetro del triangulo es: %d \n El area del triangulo es: %d", perimetro, s, area);
  return 0;
}