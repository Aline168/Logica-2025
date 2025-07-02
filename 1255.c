#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX 201

int main() {
    int n;
    char linha[MAX];
    int freq[26]; 
    scanf("%d", &n);
    getchar(); 

    for (int t = 0; t < n; t++) {
        fgets(linha, MAX, stdin);

        
        for (int i = 0; i < 26; i++) {
            freq[i] = 0;
        }

       
        for (int i = 0; linha[i] != '\0'; i++) {
            if (isalpha(linha[i])) {
                char c = tolower(linha[i]);
                freq[c - 'a']++;
            }
        }

       
        int maxFreq = 0;
        for (int i = 0; i < 26; i++) {
            if (freq[i] > maxFreq)
                maxFreq = freq[i];
        }

       
        for (int i = 0; i < 26; i++) {
            if (freq[i] == maxFreq)
                printf("%c", 'a' + i);
        }

        printf("\n");
    }

    return 0;
}
