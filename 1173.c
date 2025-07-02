#include <stdio.h>

int main()
{
    int N[10];
    int V;
    int i;

    scanf("%d", &V);

    if (V < 0 || V > 50)
    {
        printf("Valor invalido. V deve ser entre 0 e 50.\n");
        return 1;
    }

    N[0] = V;

    for(i = 1; i < 10; i++)
    {
        N[i] = N[i - 1] * 2;
    }

    for(i = 0; i < 10; i++)
    {
        printf("N[%d] = %d\n", i, N[i]);
    }

    return 0;
}
