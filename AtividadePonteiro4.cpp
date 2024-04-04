#include <stdio.h>
#include <math.h>

float PI;

void inicializar_pi() {
    PI = 3.14159265359;
}

void calcular(float raio, float *area, float *volume) {
    *area = 4 * PI * raio * raio;
    *volume = (4.0 / 3.0) * PI * pow(raio, 3);
}

int main() {
    float raio, area, volume;

    inicializar_pi();

    printf("Digite o raio da esfera: ");
    scanf("%f", &raio);

    calcular(raio, &area, &volume);

    printf("Area da superficie da esfera: %.2f\n", area);
    printf("Volume da esfera: %.2f\n", volume);

    return 0;
}
