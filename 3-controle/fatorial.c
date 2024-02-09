#include <stdio.h>
main()
{
    int n, fat, i;

    printf("Qual fatorial:");
    scanf("%d", &n);
    fat = n;

    printf("%d", n);
    for(i = fat - 1; i >= 1; i--)
    {
        printf("*%d", i);
        fat=fat*i;
    }

    printf("=%d\n", fat);

    system("pause");
}
