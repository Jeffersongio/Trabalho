#include<stdio.h>

main(){
	char name[80], age[3], sex[12], height[61], prof[61], rua[61], bairro[61], city[61], estado[61], phone[12]; 
	
	printf("Insira suas informacoes: \n\n");
	
	printf("Nome:\n");
	scanf("%s", &name);
	printf("Idade:\n");
	scanf("%s", &age);
	printf("Sexo:\n");
	scanf("%s", &sex);
	printf("Altura:\n");
	scanf("%s", &height);
	printf("Profissao:\n");
	scanf("%s", &prof);
	printf("Rua:\n");
	scanf("%s", &rua);
	printf("Bairro:\n");
	scanf("%s", &bairro);
	printf("Cidade:\n");
	scanf("%s", &city);
	printf("Estado:\n");
	scanf("%s", &estado);
	printf("Telefone:\n");
	scanf("%s", &phone);
	
	printf("\n               Suas Informacoes            \n");
	printf("\n___________________________________________\n");
	printf(" Nome:%s\n Idade:%s\n Sexo:%s\n Altura:%s\n Profissao:%s\n Rua:%s\n Bairro:%s\n Cidade:%s\n Estado:%s\n Telefone:%s\n", name, age, sex, height, prof, rua, bairro, city, estado, phone);
	printf("\n___________________________________________\n");


}

