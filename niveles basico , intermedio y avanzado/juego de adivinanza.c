#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void jugar_adivinanza() {
  srand(time(0));
  int numero_secreto = rand() % 100 + 1;
  int intento, intentos = 0;

  printf("Adivina el número entre 1 y 100\n");

  do {
    printf("Ingresa tu intento: ");
    scanf("%d", &intento);
    intentos++;

    if (intento > numero_secreto) {
      printf("Demasiado alto\n");
    } else if (intento < numero_secreto) {
      printf("Demasiado bajo\n");
    } else {
      printf("¡Felicidades! Adivinaste el número en %d intentos\n", intentos);
    }
  } while (intento != numero_secreto);
}

int main() {
  jugar_adivinanza();

  return 0;
}

