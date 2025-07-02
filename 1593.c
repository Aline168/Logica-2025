#include <stdio.h>
#include <string.h>

int contar_bits_1(char *numero)
{
    int contagem = 0;
    char resultado[1025];
    int tamanho;

    while (!(strlen(numero) == 1 && numero[0] == '0'))
    {
        int resto = 0;
        tamanho = strlen(numero);
        int j = 0;

        for (int i = 0; i < tamanho; i++)
        {
            int atual = resto * 10 + (numero[i] - '0');
            resultado[j++] = (atual / 2) + '0';
            resto = atual % 2;
        }

        resultado[j] = '\0';

        // Remove zeros à esquerda
        int inicio = 0;
        while (resultado[inicio] == '0' && inicio < j - 1)
        {
            inicio++;
        }
        strcpy(numero, resultado + inicio);

        if (resto == 1)
            contagem++;
    }

    return contagem;
}

int main()
{
    int T;
    scanf("%d", &T);

    for (int i = 0; i < T; i++)
    {
        char numero[1025];
        scanf("%s", numero);

        printf("%d\n", contar_bits_1(numero));
    }

    return 0;
}
