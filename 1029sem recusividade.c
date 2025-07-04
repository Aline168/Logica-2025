#include <stdio.h>

int pilhas(int a, int b)
{
    while(b!=0)
    {
        int temp = b;
        b = a % b;
        a = temp;


    }
}

int main()
{
    int n, F1, F2;

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d %d", &F1, &F2);
        printf("%d\n", pilhas(F1, F2));
    }

    return 0;
}
