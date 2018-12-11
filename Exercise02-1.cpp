#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main(){
		int n = 1;
		while(n <= 1){
		system("cls");
		printf("Digite um numero: ");
		scanf("%d", &n);
		}
		printf("Numeros impares:");
		while(n >= 1){
			if(n%2 != 0){
				printf("\n%d", n);
			}
			n--;
		}
		getch();
		return 0;
}
