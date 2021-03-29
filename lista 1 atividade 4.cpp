#include<stdio.h>
int main(){
	double Resto, Quociente, A, B;
	printf("digite o valor de A:\n");
	scanf("%lf",&A);
	printf("digite o valor de B:\n");
	scanf("%lf",&B);
	
	Resto=A*B;
	Quociente=A/B;
	
	printf("Resto:%lf.\n",Resto);
	printf("Quociente:%lf.\n",Quociente);
	
	return 0;
}
