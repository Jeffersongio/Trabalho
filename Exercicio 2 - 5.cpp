#include <stdio.h>

int main(void){
	int a, b, c, d;
	printf("Digite o primeiro numero:");
	scanf("%d", &a);
	printf("Digite o segundo numero:");
	scanf("%d", &b);
	printf("Digite o segundo numero:");
	scanf("%d", &c);
	d = a + b;
	if(d>c){
		printf("A soma e maior a %d:\n", c);
	}
	if(d==c){
		printf("A soma e igual a %d:\n", c);
	}
	if(d<c){
		printf("A soma e menor a %d:\n", c);
	}
	else if(d>c){
		printf("A soma nao e maior ou igual a %d", c);
	}
	else if(d==c){
		printf("A soma nao e menor ou maior a %d", c);
	}
		else if(d<c){
		printf("A soma nao e menor ou igual a %d", c);
	}
	return 0;
}
