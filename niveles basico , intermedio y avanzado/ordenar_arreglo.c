#include <stdio.h>
void ordenar(int arr[], int n, int ascendente) {
    for (int i = 0; i < n-1; i++) {
        for (int j = i+1; j < n; j++) {
            if ((ascendente && arr[i] > arr[j]) || (!ascendente && arr[i] < arr[j])) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}
int main() {
    int n, modo;
    printf("Ingrese la cantidad de elementos: ");
    scanf("%d", &n);
    int arr[n];
    printf("Ingrese los elementos:\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("Ordenar de forma (1) ascendente o (0) descendente: ");
    scanf("%d", &modo);
    ordenar(arr, n, modo);
    printf("Arreglo ordenado:\n");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
    return 0;
}
