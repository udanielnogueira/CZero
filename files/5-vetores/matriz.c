#include <stdio.h>
#define DIML 3
#define DIMC 3
int main(void) {

    int i, j;
    int matriz[DIML][DIMC];

    for(i = 0; i < DIML; i++)
        for(j = 0; j < DIMC; j++)
            scanf("%d", &matriz[i][j]);

    for(i = 0; i < DIML; i++){
        for(j = 0; j < DIMC; j++)
                printf("%2d", matriz[i][j]);
        printf("\n");
    }

    system("pause");

    return 0;
}
