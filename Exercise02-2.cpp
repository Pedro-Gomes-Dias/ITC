#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main(){
		int n = 100;
		while(n <= 100){
		system("cls");
		printf("Digite um numero: ");
		scanf("%d", &n);
		}
		for(int x = 100;n >= x;x++){
			if(x%2 == 0){
				printf("\n%d", x);
			}
		}
		getch();
		return 0;
}
