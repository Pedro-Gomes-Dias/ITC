#include <stdio.h>
#include <conio.h>
int main()
{
   float cod, codcrg, peso_em_toneladas, imposto, valor_sem_tarifa, valor_tarifado, kg;
   printf("Escreva o codigo do estado (1-5): ");
   scanf("%f", &cod);
   printf("Escreva o peso da carga em toneladas: ");
   scanf("%f", &peso_em_toneladas);
   printf("Escreva o codigo da carga (10-40): ");
   scanf("%f", &codcrg);
   kg = peso_em_toneladas * 1000;
   if(codcrg >= 10 && codcrg <= 20) {
   	valor_sem_tarifa = kg*100;
   }
   else 
   {
   	if(codcrg >= 21 && codcrg <= 30) {
   		valor_sem_tarifa = kg * 250;
	   }
	else
	{
		if(codcrg >= 31 && codcrg <= 40) {
	
		valor_sem_tarifa =  kg * 340;
	}
	else {
   printf("Codigo da carga eh invalido_Tente novamente.");
    }
  }
}
if(cod == 1) {
imposto = valor_sem_tarifa * 0.35;
}
else {
	if(cod == 2)
{
	imposto = valor_sem_tarifa * 0.25;	
	}
else {
