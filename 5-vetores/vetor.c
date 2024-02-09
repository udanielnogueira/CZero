#include <stdio.h>
int main(void) {

    int vetor[5], i, num;

    printf("A partir de qual numero quer sua sequencia: ");
    scanf("%d", &num);

    for(i = 0; i < 5; i++, num++){
        vetor[i] = num;
    }

    for(i = 0; i < 5; i++){
        printf("vetor[%d] = %d\n", i, vetor[i]);
    }

    system("pause");
    return 0;
}
