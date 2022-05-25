#include <stdio.h>
#include <stdlib.h>

int main(){
	int d1, m1, a1, d2, m2, a2;
	
	printf("Digite a primeira data:\n");
	printf("Dia (dd):");
	scanf("%i%*c",&d1);
	
	printf("Mes (mm):");
	scanf("%i%*c",&m1);
	
	printf("Ano (aaaa):");
	scanf("%i%*c",&a1);
	
	printf("Digite a segunda data\n");
	printf("Dia (dd):");
	scanf("%i%*c",&d2);
	
	printf("Mes (mm):");
	scanf("%i%*c",&m2);
	
	printf("Ano (aaaa):");
	scanf("%i%*c",&a2);
	
	if(a1>a2){
		printf("A maior data e: %.0i - %.0i - %.0i", d1,m1,a1);
	}
	
	else if (a2 > a1){
	 printf("A maior data e: %.0i - %.0i - %.0i", d2,m2,a2);
	}
	
	else if (a1 == a2){
		if(m1>m2){
			printf("A maior data e: %.0i - %.0i - %.0i", d1,m1,a1);
	}
	
	else if (m2 > m1){
		 printf("A maior data e: %.0i - %.0i - %.0i", d2,m2,a2);
	} 
	
	else if(m1 == m2){
		if (d1 > d2){
			printf("A maior data e: %.0i - %.0i - %.0i", d1,m1,a1);
	}
	
	else if (d2 > d1){
			printf("A maior data e: %.0i - %.0i - %.0i", d2,m2,a2);
	}
	
	else{
			printf("As datas sao iguais");
	
	}
	}
	}
}
