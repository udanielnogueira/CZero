#include <stdio.h>
main() {

    int vetor[] = {1, 2, 3, 4, 5, 6, 7};
    int i, *p;

    /* With arrays, If I don't say the position I don't
    need to use the & operator. Using p = v would 
    work in the same way. */

    for(i = 0, p = &vetor[0]; i < 7; i++, p++){
        printf("%d\n", *p);
    }

    system("pause");

}
