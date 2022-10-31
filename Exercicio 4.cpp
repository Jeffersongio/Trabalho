#include<stdio.h>
main(){
    float Carro, NovoP;

	printf(" Qual o custo de fabrica? ");
	scanf("%f", &Carro);

	NovoP = Carro + (Carro * 0.12) + (Carro * 0.45);

	printf("\n Seu carro ira custar R$ %.2f ", NovoP);

}
