
#include <stdio.h>
#include <string.h>

#define MAX 51

int eh_vogal(char c)
{
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}

int main()
{
    char risada[MAX], vogais[MAX];
    int v = 0;

    fgets(risada, MAX, stdin);
    risada[strcspn(risada, "\n")] = '\0'; // remove \n

    for (int i = 0; risada[i] != '\0'; i++)
    {
        if (eh_vogal(risada[i]))
        {
            vogais[v++] = risada[i];
        }
    }

    int engracada = 1;
    for (int i = 0; i < v / 2; i++)
    {
        if (vogais[i] != vogais[v - 1 - i])
        {
            engracada = 0;
            break;
        }
    }

    printf("%c\n", engracada ? 'S' : 'N');

    return 0;
}
