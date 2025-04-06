#include <stdio.h>
#define PI 3.14159
int main() {
    float radio, area;
    printf("Ingrese el radio del círculo: ");
    scanf("%f", &radio);
    area = PI * radio * radio;
    printf("El área del círculo es: %.2f\n", area);
    return 0;
}
