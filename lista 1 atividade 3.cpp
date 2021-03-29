#include<stdio.h>
int main(){
	double A, B, C, Media;
	printf("digite o valor de A:\n");
	scanf("%lf",&A);
	printf("digite o valor de B:\n");
	scanf("%lf",&B);
	printf("digite o valor de C:\n");
	scanf("%lf",&C);
	
	Media=A+B+C/3;
	
	printf("resultado da media:%.1lf\n",Media);
	
	return 0;
}
