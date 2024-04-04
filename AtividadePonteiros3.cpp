#include <stdio.h>

int i;
float numeroReal [2] = {5.1};
int parteInteira;
float partefracionaria;


void partes_numero_real(float numeroReal , int *parteInteira, float *partefracionaria) {

    *parteInteira = (int)numeroReal ;

    *partefracionaria = numeroReal - *parteInteira;


}


int main(){



printf("%.1f \n",numeroReal [i]);
printf("Parte Inteira: %d\n", parteInteira);
printf("Parte Fracionaria: %.2f\n", partefracionaria);


return 0;

}
