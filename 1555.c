#include <stdio.h>
#include <math.h>

int main()
{
    int N;
    int x, y;

    scanf("%d", &N);

    for (int i = 0; i < N; i++)
    {
        scanf("%d %d", &x, &y);

        double r = pow(3 * x, 2) + pow(y, 2);
        double b = 2 * pow(x, 2) + pow(5 * y, 2);
        double c = -100 * x + pow(y, 3);

        if (r > b && r > c)
        {
            printf("Rafael ganhou\n");
        }
        else if (b > r && b > c)
        {
            printf("Beto ganhou\n");
        }
        else
        {
            printf("Carlos ganhou\n");
        }
    }

    return 0;
}
