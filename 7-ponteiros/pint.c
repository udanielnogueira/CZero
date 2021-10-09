#include <stdio.h>
main()
{
    int num=10, res=120;
    int *pint;

    printf("Valores antes da operacao com ponteiro:\n");
    printf("num=%d res=%d\n", num, res);

    pint = &num;
    res = *pint;

    printf("\n\n");

    printf("Valores depois da operacao com ponteiro:\n");
    printf("pint = &num; res = *pint;\n");
    printf("num=%d res=%d\n", num, res);

    system("pause");


}
