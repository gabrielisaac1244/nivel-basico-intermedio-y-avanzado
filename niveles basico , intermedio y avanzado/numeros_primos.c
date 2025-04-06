#include <stdio.h>
#include <stdbool.h>
bool esPrimo(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0) return false;
    return true;
}
int main() {
    int inicio, fin;
    printf("Ingrese el rango (inicio y fin): ");
    scanf("%d %d", &inicio, &fin);
    printf("Números primos en el rango:\n");
    for (int i = inicio; i <= fin; i++)
        if (esPrimo(i)) printf("%d ", i);
    printf("\n");
    return 0;
}
