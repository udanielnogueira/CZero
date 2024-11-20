#include <stdio.h>
void main(void)
{
    int x = 2, y = 4, z = 100;
    int resultado;

    resultado = (x == 2) && (y < 10) && (z != 100);

    printf("valor logico da expressao vale %d\n", resultado);

    system("pause");
}