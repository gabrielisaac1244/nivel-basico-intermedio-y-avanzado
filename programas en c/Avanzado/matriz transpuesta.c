#include <stdio.h>
int main() {
    int filas, columnas;
    printf("Ingrese el número de filas y columnas: ");
    scanf("%d %d", &filas, &columnas);
    int matriz[filas][columnas], transpuesta[columnas][filas];
    printf("Ingrese los elementos de la matriz:\n");
    for (int i = 0; i < filas; i++)
        for (int j = 0; j < columnas; j++)
            scanf("%d", &matriz[i][j]);
    for (int i = 0; i < filas; i++)
        for (int j = 0; j < columnas; j++)
            transpuesta[j][i] = matriz[i][j];
    printf("Matriz transpuesta:\n");
    for (int i = 0; i < columnas; i++) {
        for (int j = 0; j < filas; j++)
            printf("%d ", transpuesta[i][j]);
        printf("\n");
    }
    return 0;
}
