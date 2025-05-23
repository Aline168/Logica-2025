#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX 1001

void passo1(char *in, char *out) {
    int i = 0;
    while (in[i] != '\0') {
        if (isalpha(in[i]))
            out[i] = in[i] + 3;
        else
            out[i] = in[i];
        i++;
    }
    out[i] = '\0';
}

void passo2(char *in, char *out) {
    int len = strlen(in);
    for (int i = 0; i < len; i++) {
        out[i] = in[len - i - 1];
    }
    out[len] = '\0';
}

void passo3(char *in, char *out) {
    int len = strlen(in);
    int meio = len / 2;
    for (int i = 0; i < len; i++) {
        if (i >= meio)
            out[i] = in[i] - 1;
        else
            out[i] = in[i];
    }
    out[len] = '\0';
}

int main() {
    int n;
    char l1[MAX], l2[MAX], l3[MAX], l4[MAX];

    scanf("%d", &n);
    getchar(); // Consome o '\n'

    for (int i = 0; i < n; i++) {
        fgets(l1, MAX, stdin);
        l1[strcspn(l1, "\n")] = '\0'; // Remove \n

        passo1(l1, l2);
        passo2(l2, l3);
        passo3(l3, l4);

        printf("%s\n", l4);
    }

    return 0;
}
