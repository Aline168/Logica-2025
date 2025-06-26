#include <stdio.h>

int main() {
    int T;
    int respostas[5];
    int i, corretos = 0;


    scanf("%d", &T);

    for (i = 0; i < 5; i++) {
        scanf("%d", &respostas[i]);
    }

    for (i = 0; i < 5; i++) {
        if (respostas[i] == T) {
            corretos++;
        }
    }

    printf("%d\n", corretos);

    return 0;
}
