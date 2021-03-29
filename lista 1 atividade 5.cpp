#include<stdio.h>
int main(){
	int Metros, Rolos, Avulsos;
	printf("digite o numero de Metros:\n");
	scanf("%d",&Metros);
	
	Rolos=Metros/50;
	Avulsos=Metros*50;
	
	printf("numero de rolos:%d, numero de metros avulsos:%d\n",Rolos,Avulsos);
	
	return 0;
}
