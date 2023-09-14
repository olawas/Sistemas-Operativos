#include <stdio.h>
#include <string.h>
int main() {
  //Inicializamos el array, con sus capacidades correspondientes  
  char nombres[5][50];
  //insertamos los nombres utilizando la funcion strcpy
  strcpy(nombres[0], "Juan");
  strcpy(nombres[1], "Maximiliano");
  strcpy(nombres[2], "Pablo");
  strcpy(nombres[3], "Miriam");
  strcpy(nombres[4], "Luchito");
  for(int i=0;i<5;i++){
    printf("Inicial: %c\n",nombres[i][0]);
  }
  return 0;
}