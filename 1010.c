#include <stdio.h>

int main() {

int c1, c2;
float n1, n2;
float v1, v2;
float soma;


scanf("%d %f %f", &c1, &n1, &v1);
scanf("%d %f %f", &c2, &n2, &v2);

soma = (n2*v2) + (n1 * v1);


printf("VALOR A PAGAR: R$ %.2f\n", soma);

return 0;
}
