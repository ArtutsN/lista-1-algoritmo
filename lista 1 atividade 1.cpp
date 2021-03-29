#include<stdio.h>
int main(){
	int Horas, Minutos, Segundos;
	printf("digite o valor de Horas:\n");
	scanf("%d",&Horas);
	
	Minutos=Horas*60;
	Segundos=Minutos*3600;
	
	printf("resultado:Horas=%d, Minutos=%d, Segundos=%d \n");
	
	return 0;
}
