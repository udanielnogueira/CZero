#include <stdio.h>
main() {

    int *p1, *p2;

    int vetor[] = {10, 20, 30, 40, 50};

    p1 = &vetor[0];
    printf("ponteiro 1: %d\n", *p1);

    p2 = p1 + 1;
    printf("ponteiro 2: %d\n", *p2);

    // If I did p2 = p1++, p1 would receive 20 and p2 10.
    // If I did p1++ and after p2 = p1, both would receive 20.

    system("pause");
}
