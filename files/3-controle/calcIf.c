#include <stdio.h>
main()
{
    int operando1, operando2, resultado;
    char sinal;

    printf("CALCULDORA DE INTEIROS\n");

    printf("Digite o operando seguido do sinal e outro operando\n");

    printf("use o espaco\n");
    scanf("%d %c %d", &operando1, &sinal, &operando2);

    if(sinal == '+')
    {
        resultado = operando1 + operando2;
        printf("sua soma: %d\n", resultado);
    }
    else if(sinal == '-')
    {
        resultado = operando1 - operando2;
        printf("sua subtracao: %d\n", resultado);
    }
    else if(sinal == '*')
    {
        resultado = operando1 * operando2;
        printf("sua multiplicacao: %d\n", resultado);
    }
    else if(sinal == '/')
    {
        resultado = operando1 / operando2;
        printf("sua divisao: %d\n", resultado);
    }
    else
        printf("digite uma operacao valida\n");

    system("pause");
}
