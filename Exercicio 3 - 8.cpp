#include<stdio.h>
int main(void){
	int a, b ,c;
	
	printf("Digite um numero:");
	scanf("%d", &a);
	printf("Digite outro numero:");
	scanf("%d", &b);
	
	if (a==b){
		c = a+b;
		printf("Os numeros sao igual por tanto a soma e:%d", c);
	}
	else if (a*b){
		c = a*b;
		printf("Os numeors sao diferente por tanto a multiplicacao e:%d",c);
	}
	
}
