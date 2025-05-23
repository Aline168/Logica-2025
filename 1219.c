#include <stdio.h>
#include <math.h>

#define PI 3.1415926535897

int main() {
double a, b, c;

while (scanf("%lf %lf %lf", &a, &b, &c) == 3) {
    double p = (a + b + c) / 2.0;

  
    double area_triangle = sqrt(p * (p - a) * (p - b) * (p - c));

    
    double r = area_triangle / p;
    double area_incircle = PI * r * r;

    double R = (a * b * c) / (4.0 * area_triangle);
    double area_circumcircle = PI * R * R;

  
    double area_roses = area_incircle;
    double area_violets = area_triangle - area_incircle;
    double area_sunflowers = area_circumcircle - area_triangle;

    printf("%.4lf %.4lf %.4lf\n", area_sunflowers, area_violets, area_roses);
}

return 0;
}
