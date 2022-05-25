#include <stdio.h>

int main(){
	float sal, aumento1, aumento2, novosalario2, novosalario1;
	printf("Digite seu salario:");
	scanf("%f%*c", &sal);
	
	aumento1=sal*35/100;
	novosalario1= sal+aumento1;
	aumento2=sal*15/100;
	novosalario2=sal+aumento2;
	
	if (sal>300){
		printf("Seu novo salario e: %.2f\n", novosalario2);
	}
	else{
		printf("Seu novo salario e: %.2f\n", novosalario1);
		
	}
	return 0;
}
