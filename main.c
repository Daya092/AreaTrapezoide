#include <stdio.h>
#include <string.h>
int main() {
    printf("Bienvenido, vamos a calcular el area de un Trapezoide\n");
    float BaseMayor, BaseMenor, Altura;

    printf("Por favor ingresa el valor de la Base Mayor: \n");
    if (scanf("%f", &BaseMayor) != 1) {
        printf("Por favor ingresa un numero valido \n");
        return 1;
    }

    printf("Por favor ingresa el valor de la base menor: \n");
    if (scanf("%f", &BaseMenor) != 1) {
        printf("Por favor ingresa un numero valido \n");
        return 1;
    }

    printf("Por favor ingresa el valor de la altura: \n");
    if (scanf("%f", &Altura) != 1) {
        printf("Por favor ingresa un numero valido \n");
        return 1;
    }

    float Resultado = ((BaseMayor + BaseMenor) * Altura) / 2;

    printf("Este es el Area del trapezoide: %f cm^2\n", Resultado);

    return 0;
}
