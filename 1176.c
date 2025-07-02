#include <stdio.h>

int main()
{
    int T, N, i, j;
    unsigned long long fib[61];

    fib[0] = 0;
    fib[1] = 1;

    for(i = 2; i <= 60; i++)
    {
        fib[i] = fib[i - 1] + fib[i - 2];
    }

    scanf("%d", &T);

    for(j = 0; j < T; j++)
    {
        scanf("%d", &N);
        printf("Fib(%d) = %llu\n", N, fib[N]);
    }

    return 0;
}
