#include<stdio.h>
int main(){
	double A, B, Media;
	printf("digite o valor de A:\n");
	scanf("%lf",&A);
	printf("digite o valor de B:\n");
	scanf("%lf",&B);
	
	Media=((A*3.5)+(B*7.5))/11;
	
	printf("Media:%.1lf.\n",Media);
	
	return 0;
}
