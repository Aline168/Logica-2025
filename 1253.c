#include <stdio.h>
#include <string.h>

#define MAX 51

void decodificar(char *texto, int deslocamento) {
    for (int i = 0; texto[i] != '\0'; i++) {
        texto[i] = ((texto[i] - 'A' - deslocamento + 26) % 26) + 'A';
    }
}

int main() {
    int n, desloc;
    char texto[MAX];

    scanf("%d", &n);
    getchar(); // Consome o \n após o número

    for (int i = 0; i < n; i++) {
        fgets(texto, MAX, stdin);
        texto[strcspn(texto, "\n")] = '\0'; // Remove o \n

        scanf("%d", &desloc);
        getchar(); // Consome o \n após o número

        decodificar(texto, desloc);
        printf("%s\n", texto);
    }

    return 0;
}
