#include <stdio.h>
main(){

    int vetor[] = {1, 2, 3, 4, 5, 6, 7};
    int i, *p;

    /*
    Com vetores, se eu nao informar a posicao
    nao precisa usar o operador &
    ex.: p=v;
    Funcionaria do mesmo jeito
    */
    for(i=0, p=&vetor[0]; i<7; i++, p++){
        printf("%d\n", *p);
    }

    system("pause");

}
