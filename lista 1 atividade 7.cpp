#include<stdio.h>
int main(){
	int Matricula, Horas;
	double Valor, Salario;
	char Nome[50], Sexo[1];
	
	printf("digite o nome:\n");
	scanf("%s",&Nome);
	printf("digite o sexo(F/M):\n");
	scanf("%s",&Sexo);
	printf("digite a matricula:\n");
	scanf("%d",&Matricula);
	printf("digite o numero de horas:\n");
	scanf("%d",&Horas);
	printf("digite o valor recebido por hora:\n");
	scanf("%lf",&Valor);
	
	Salario=Horas*Valor;
	
	printf("\n Nome:%s",Nome);
	printf("\n Sexo:%s",Sexo);
	printf("\n Matricula:%d",Matricula);
	printf("\n numero de horas:%d",Horas);
	printf("\n valor por hora:%.2lf",Valor);
	printf("\n salario:%.2lf",Salario);
	
	return 0;
}
