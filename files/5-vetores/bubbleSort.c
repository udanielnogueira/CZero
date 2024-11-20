#include <stdio.h>
#define DIM 51
int main(void) {

    int n, i, temp, mudei, vetor[DIM];

    printf("De quantos elementos sera seu vetor? ");
    scanf("%d", &n);

    for(i = 0; i < n; i++){
        printf("elemento %d: ",i + 1);
        scanf("%d", &vetor[i]);
    }

   do {
        mudei = 0;
        for(i = 0; i < n; i++) {
        if(vetor[i] > vetor[i+1]){
            temp = vetor[i];
            vetor[i] = vetor[i+1];
            vetor[i+1] = temp;
            mudei = 1;
            }
        } 
   } while(mudei);

    printf("Seus elemantos ordenados\n");
    for(i = 0; i < n; i++){
        printf("%d\n", vetor[i]);
    }

    system("pause");

    return 0;

}
