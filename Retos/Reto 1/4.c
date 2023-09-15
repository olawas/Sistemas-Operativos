#include <stdio.h>

int main() {
    int matriz1[2][2], matriz2[2][2], resultado[2][2];
    printf("Ingrese los valores de la primera matriz 2x2:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("Ingrese el valor para la posición [%d][%d]: ", i, j);
            scanf("%d", &matriz1[i][j]);
        }
    }
    printf("Ingrese los valores de la segunda matriz 2x2:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("Ingrese el valor para la posición [%d][%d]: ", i, j);
            scanf("%d", &matriz2[i][j]);
        }
    }
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            resultado[i][j] = matriz1[i][j] + matriz2[i][j];
        }
    }
    printf("La suma de las dos matrices es:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", resultado[i][j]);
        }
        printf("\n");
    }

    return 0;
}