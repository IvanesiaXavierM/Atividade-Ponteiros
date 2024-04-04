#include <stdio.h>

int i;
float posicao [10] = {0,1,2,3,4,5,6,7,8,9};
float *p  = posicao;



int main(){


   for(i = 0; i < 10; i++)
   printf("%.lf \n", posicao [i]);


   for (i = 0; i < 10; i++) {
   printf("Endereco da posicao = %d %d\n", i, (posicao + i));
}



return 0;

}
