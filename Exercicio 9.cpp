#include <stdio.h>
#include <stdlib.h>


int main() {
	float diaria=300.0 , taxa = 0.0, totalavista=0.0, totalaprazo =0.0;
	int dias=0, comprimento;
	char nome[61];
	printf("Informe o numero de diarias:");
	scanf("%d",&dias);
	printf("\nInforme o nome\n");
	scanf("%s", &nome);
	if(dias<15){
		taxa=20.0;		
	} else{
		if(dias==15){
			taxa=14.0;
		}else{
			if(dias>15) taxa=12.0;
		}
	}
	totalavista = (dias*(diaria*0.9))+taxa*0.95; 
	totalaprazo = (dias*diaria)+taxa;
	printf("\nTotal a pagar:\t Hospede:%s \n",nome) ;
	printf("\n\tValor em dinheiro: R$%.2f",totalavista) ;
	printf("\n\tValor em dinheiro: R$%.2f\n",totalaprazo) ;
	system("pause");
	return 0;
}
