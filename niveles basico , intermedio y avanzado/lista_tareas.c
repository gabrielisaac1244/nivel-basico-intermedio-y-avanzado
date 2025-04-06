#include <stdio.h>
#include <string.h>
#define MAX_TAREAS 100
#define LONGITUD 100
typedef struct {
    char descripcion[LONGITUD];
    int completada;
} Tarea;
int main() {
    Tarea tareas[MAX_TAREAS];
    int total = 0, opcion;
    do {
        printf("\n--- Lista de Tareas ---\n");
        printf("1. Agregar tarea\n");
        printf("2. Eliminar tarea\n");
        printf("3. Marcar como completada\n");
        printf("4. Mostrar tareas\n");
        printf("5. Salir\n");
        printf("Seleccione una opción: ");
        scanf("%d", &opcion);
        getchar();
        if (opcion == 1 && total < MAX_TAREAS) {
            printf("Ingrese la descripción: ");
            fgets(tareas[total].descripcion, LONGITUD, stdin);
            tareas[total].descripcion[strcspn(tareas[total].descripcion, "\n")] = 0;
            tareas[total].completada = 0;
            total++;
        } else if (opcion == 2) {
            int idx;
            printf("Número de tarea a eliminar: ");
            scanf("%d", &idx);
            if (idx >= 0 && idx < total) {
                for (int i = idx; i < total - 1; i++)
                    tareas[i] = tareas[i + 1];
                total--;
            } else {
                printf("Índice inválido.\n");
            }
        } else if (opcion == 3) {
            int idx;
            printf("Número de tarea a marcar como completada: ");
            scanf("%d", &idx);
            if (idx >= 0 && idx < total) {
                tareas[idx].completada = 1;
            } else {
                printf("Índice inválido.\n");
            }
        } else if (opcion == 4) {
            printf("\nTareas:\n");
            for (int i = 0; i < total; i++) {
                printf("%d. [%c] %s\n", i, tareas[i].completada ? 'X' : ' ', tareas[i].descripcion);
            }
        }
    } while (opcion != 5);
    return 0;
}
