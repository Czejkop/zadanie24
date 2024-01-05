#include <stdio.h>
#include <math.h>
float a = 0;
float b = 0;
float r = 0;
int select = 0;

void obliczeniePolaKola(){ 
    printf("\nPodaj promien kola:\t");
    scanf("%f", &r);
    printf("\nPole kola wynosi:%f\n", M_PI*pow(r, 2));
}

void obliczeniePolaProstokata(){
    printf("\nPodaj pierwszy wymiar prostokata:\t");
    scanf("%f", &a);
    printf("\nPodaj drugi wymiar prostokata:\t");
    scanf("%f", &b);
    printf("\nPole prostokata wynosi:\t%f\n", (a*b));
}

int main() {
	while (1){
		printf("\n1-Pole prostokanta\n2-Pole kola\n3-Wyjscie z programu\n");
		scanf("%d", &select);
		switch(select){
			case 1:
				obliczeniePolaProstokata();
				break;
			case 2:
				obliczeniePolaKola();
				break;
			case 3:
		 		return 0;
			default:
				printf("\nNieprawid³owa komenda\n"); 		
		}
	}
}
