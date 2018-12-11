#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

		double denominador = 1, numerador = 61, aux = 1, acumulador = 0, soma = 0;
	double fatorial(double fat){
		double denominadorres = 1;
		while(fat > 1){
			denominadorres *= fat;
			fat--;
		}
		return denominadorres;
	}
	
	int main(){
		for(int i = 1; i < 20; i++){	
			aux = (numerador/fatorial(denominador));
			numerador -= 2;
			denominador++;
			acumulador += aux;
		}
	soma = acumulador + 63;
	printf("\nO resultado da serie e: %lf ",soma);
	getch();
	return 0;
	}
