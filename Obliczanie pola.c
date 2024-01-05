#include <stdio.h>
#include <math.h>
float a = 0;
float b = 0;
float r=0;
float obliczanie_pola_kola(float r)
{ 
return(M_PI * pow(r,2));
}
float obliczeniePolaProstokata(float a, float b){
    return (a*b);
}
int main() {
    printf("Podaj pierwszy wymiar prostokata:\t");
    scanf("%f", &a);
    printf("Podaj drugi wymiar prostokata:\t");
    scanf("%f", &b);
    printf("Pole wynosi:\t%f", obliczeniePolaProstokata(a, b));
   
    printf("\nPodaj promien kola:");
    scanf("%f", &r);
    printf("Pole kola wynosi:%f", obliczanie_pola_kola(r));
    return 0;
}
