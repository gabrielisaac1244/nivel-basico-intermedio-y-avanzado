#include <stdio.h>

int busqueda_binaria(int arr[], int n, int clave) {
  int izquierda = 0, derecha = n - 1;

  while (izquierda <= derecha) {
    int medio = izquierda + (derecha - izquierda) / 2;
    if (arr[medio] == clave) {
      return medio;
    }
    if (arr[medio] < clave) {
      izquierda = medio + 1;
    } else {
      derecha = medio - 1;
    }
  }

  return -1;
}

int main() {
  int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
  int n = sizeof(arr) / sizeof(arr[0]);
  int clave = 5;

  int indice = busqueda_binaria(arr, n, clave);

  if (indice != -1) {
    printf("Elemento encontrado en el índice: %d\n", indice);
  } else {
    printf("Elemento no encontrado\n");
  }

  return 0;
}
