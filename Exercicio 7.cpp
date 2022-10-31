#include<stdio.h>

main(){
	float cm, vc, pc, tt;
		
	
	printf("Numero de carros vendidos nesse mes?");
	scanf("%f", &cm);
	printf("Valor dos carros?");
	scanf("%f", &vc);
	
	
	tt = 3.000 + (500 * cm) + (vc + cm  * (5/100));
	
	printf("%.2f", tt);

}
