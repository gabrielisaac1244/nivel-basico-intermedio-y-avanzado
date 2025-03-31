#include <stdio.h>
#define PI 3.14159

int main() {
    float radio, area;
    printf("Ingrese el radio del circulo: ");
    scanf("%f", &radio);
    area = PI * radio * radio;
    printf("El area del circulo es: %.2f\n", area);
    
}

