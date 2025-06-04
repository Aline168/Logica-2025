#include <stdio.h>

int main() {
    char operacao;
    double M[12][12];
    double soma = 0.0;
    int i, j;

   
    scanf(" %c", &operacao);

  
    for (i = 0; i < 12; i++) {
        for (j = 0; j < 12; j++) {
            scanf("%lf", &M[i][j]);
        }
    }

   
    for (i = 0; i < 12; i++) {
        for (j = 0; j < 12 - 1 - i; j++) {
            soma += M[i][j];
        }
    }

    
    if (operacao == 'S') {
        printf("%.1lf\n", soma);
    } else if (operacao == 'M') {
        int total_elementos = (12 * 11) / 2; 
        printf("%.1lf\n", soma / total_elementos);
    }

    return 0;
}
