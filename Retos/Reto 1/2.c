#include <stdio.h>
#include <string.h>
int main() {
  //Inicializamos el array, con sus capacidades correspondientes  
  char nombres[5][50];
  //insertamos los nombres utilizando la funcion strcpy
  for(int i=0; i<5; i++){
    printf("Ingrese el nombre %d: ", i + 1);
    scanf("%s", nombres[i]);
  }
  for(int i=0;i<5;i++){
    printf("Nombre %d: %s\n",i+1,nombres[i]);
  }
  return 0;
}