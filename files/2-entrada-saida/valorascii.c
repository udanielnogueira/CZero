#include <stdio.h>
int main(void) {

    char letra;

    printf("Digite uma letra:");
    scanf("%c", &letra);

    printf("O codigo ASCII da letra %c eh %d\n", letra, letra);

    system("pause");

    return 0;
}
