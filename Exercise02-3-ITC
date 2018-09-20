#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

float calculo(float n){
	float dividaaux;
	dividaaux = n * 0.075;
	n = n + dividaaux;		
	return n;
}

int main(){
	float divida, dividaaux, x;
	while(divida <= 0){
	system("cls");
	printf("Digite o valor da sua divida: R$");
	scanf("%f", &divida);
	}
	for(int x = 1; x <= 36; x++){
		x = calculo(divida);		
	}
	printf("\nSua divida apos 3 anos eh de: R$%.2f", x);
	getch();
	return 0;
}
