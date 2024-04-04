#include <stdio.h>

int a,b;



int main(){

    //for (i = 0; i < 2; i++){
   // printf (" ", a,b);
   // scanf("%d", &a,&b);


    printf("Variavel 1: ");
    scanf("%d", &a);

    printf("Variavel 2: ");
    scanf("%d", &b);

    //double  &a, &b;
    printf("\nEndereco 1: %p \nEndereco 2: %p\n\n", &a, &b);

    printf("Maior endereco: ");
    if (&a > &b) {
        printf("Endereco 1: %p\n", &a);
    } else {
        printf("Endereco 2: %p\n", &b);
    }


return 0;

}
