#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
    int numeroSecreto, intento, intentos = 0;
    srand(time(NULL));
    numeroSecreto = rand() % 100 + 1;
    printf("Adivina el numero (entre 1 y 100):\n");
    do {
        printf("Ingresa tu intento: ");
        scanf("%d", &intento);
        intentos++;
        if (intento < numeroSecreto)
            printf("Demasiado bajo!\n");
        else if (intento > numeroSecreto)
            printf("Demasiado alto!\n");
        else
            printf("A Correcto! Lo lograste en %d intentos.\n", intentos);
    } while (intento != numeroSecreto);
    return 0;
}
