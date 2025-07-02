#include <stdio.h>

int pilhas(int a, int b )
{
    if(b==0)
    {
        return a;

    }
    return pilhas(b, a % b);
}

int main()
{
    int n;
    int F1;
    int F2;

    scanf("%d", &n);
    for(int i=0; i< n; i++)
    {
        scanf("%d", &F1);
        scanf("%d", &F2 );
        printf("%d\n ",pilhas(F1, F2)) ;
    }

    return 0;
}
