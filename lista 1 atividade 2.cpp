#include<stdio.h>
int main(){
	double Area, raio;
	printf("digite o valor de r:\n");
	scanf("%lf",&raio);
	
	Area=3.14*(raio*raio);
	
	printf("Area do circulo e igual a: %.1lf.\n",Area);
	
	return 0;
}
