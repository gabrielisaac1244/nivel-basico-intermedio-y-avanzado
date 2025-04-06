#include <stdio.h>
int busquedaBinaria(int arr[], int n, int clave) {
    int inicio = 0, fin = n - 1;
    while (inicio <= fin) {
        int medio = (inicio + fin) / 2;
        if (arr[medio] == clave) return medio;
        else if (arr[medio] < clave) inicio = medio + 1;
        else fin = medio - 1;
    }
    return -1;
}
int main() {
    int n, clave;
    printf("Ingrese el numero de elementos: ");
    scanf("%d", &n);
    int arr[n];
    printf("Ingrese los elementos ordenados:\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("Ingrese el numero a buscar: ");
    scanf("%d", &clave);
    int resultado = busquedaBinaria(arr, n, clave);
    if (resultado != -1)
        printf("Elemento encontrado en la posicion %d\n", resultado);
    else
        printf("Elemento no encontrado.\n");
    return 0;
}
