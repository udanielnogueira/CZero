#include <stdio.h>
main(){

    int *p1, *p2;

    int vetor[] = {10, 20, 30, 40, 50};

    p1 = &vetor[0];
    printf("ponteiro 1: %d\n", *p1);

    p2 = p1+1;
    printf("ponteiro 2: %d\n", *p2);

    /*
    Se eu fizesse p2=p1++; p1 ficaria 20 e p2 ficaria 10
    Se eu fizesse p1++; e depois p2=p1, os dois seriam 20
    */


    system("pause");
}
