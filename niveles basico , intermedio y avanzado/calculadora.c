#include <stdio.h>

void calcular();

int main() {
    calcular();
    return 0;
}

void calcular() {
    int opcion;
    float num1, num2, resultado;
    
    do {
        printf("\nCalculadora en C\n");
        printf("1. Sumar\n");
        printf("2. Restar\n");
        printf("3. Multiplicar\n");
        printf("4. Dividir\n");
        printf("5. Salir\n");
        printf("Seleccione una opcion: ");
        scanf("%d", &opcion);
        
        if (opcion >= 1 && opcion <= 4) {
            printf("Ingrese el primer numero: ");
            scanf("%f", &num1);
            printf("Ingrese el segundo numero: ");
            scanf("%f", &num2);
        }
        
        switch (opcion) {
            case 1:
                resultado = num1 + num2;
                printf("Resultado: %.2f\n", resultado);
                break;
            case 2:
                resultado = num1 - num2;
                printf("Resultado: %.2f\n", resultado);
                break;
            case 3:
                resultado = num1 * num2;
                printf("Resultado: %.2f\n", resultado);
                break;
            case 4:
                if (num2 != 0)
                    resultado = num1 / num2;
                else
                    printf("Error: Division por cero no permitida.\n");
                printf("Resultado: %.2f\n", resultado);
                break;
            case 5:
                printf("Saliendo...\n");
                break;
            default:
                printf("Opcion no valida, intente de nuevo.\n");
        }
    } while (opcion != 5);
}
