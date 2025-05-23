#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX 201

int main() {
    int n;
    char linha[MAX];
    int freq[26]; // Frequência de 'a' a 'z'

    scanf("%d", &n);
    getchar(); // Consome o '\n' após o número

    for (int t = 0; t < n; t++) {
        fgets(linha, MAX, stdin);

        // Zerar o vetor de frequência
        for (int i = 0; i < 26; i++) {
            freq[i] = 0;
        }

        // Contar a frequência das letras
        for (int i = 0; linha[i] != '\0'; i++) {
            if (isalpha(linha[i])) {
                char c = tolower(linha[i]);
                freq[c - 'a']++;
            }
        }

        // Achar a maior frequência
        int maxFreq = 0;
        for (int i = 0; i < 26; i++) {
            if (freq[i] > maxFreq)
                maxFreq = freq[i];
        }

        // Imprimir as letras com maior frequência
        for (int i = 0; i < 26; i++) {
            if (freq[i] == maxFreq)
                printf("%c", 'a' + i);
        }

        printf("\n");
    }

    return 0;
}
