#include <stdio.h>
float a = 0;
float b = 0;

float obliczeniePolaProstokata(float a, float b){
    return (a*b);
}
int main() {
    printf("Podaj pierwszy wymiar prostokata:\t");
    scanf("%f", &a);
    printf("Podaj drugi wymiar prostokata:\t");
    scanf("%f", &b);
    printf("Pole wynosi:\t%f", obliczeniePolaProstokata(a, b));
    return 0;
}
