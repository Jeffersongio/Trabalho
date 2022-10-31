#include<stdio.h>
main(){
	float ff , da, ma, li, cs, dg, dc;
	ff = 0.2155;
	da = 1.06;
	ma = 0.4320;
	li = 1.84;
	cs = 0.2425;
	dg = 0.0295;
	
	printf("Quantos Franco Franceses deseja converter:");
	scanf("%f", &dc);
	dc= dc*ff;
	printf("A quantidade de Dolares canadenses e:\n%.2f\n", dc);
	
	printf("Quantos dolares americanos deseja converter:");
	scanf("%f", &dc);
	dc = dc*da;
	printf("A quantidade de Dolares canadenses e:\n%.2f\n", dc);
	
	printf("Quantos marcos alemaes deseja converter:");
	scanf("%f", &dc);
	dc = dc*ma;
	printf("A quantidade de Dolares canadenses e:\n%.2f\n", dc);
	
	printf("Quantos libra inglesa deseja converter:");
	scanf("%f", &dc);
	dc = dc*li;
	printf("A quantidade de Dolares canadenses e:\n%.2f\n", dc);
	
	printf("Quantos coroas suecas deseja converter:");
	scanf("%f", &dc);
	dc = dc*cs;
	printf("A quantidade de Dolares canadenses e:\n%.2f\n", dc);
	
	printf("Quantos dracmas gregos deseja converter:");
	scanf("%f", &dc);
	dc = dc*dg;
	printf("A quantidade de Dolares canadenses e:\n%.2f\n", dc);
}
