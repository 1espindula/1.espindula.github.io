#include <stdio.h>

int main(){
	float num1, num2, num3, MA;
	
	printf("Digite o primeiro numero:\n");
	scanf("%f%*c", &num1);
	printf("Digite o segundo numero:\n");
	scanf("%f%*c", &num2);
	printf("Digite o terceiro numero:\n");
	scanf("%f%*c", &num3);
	
	MA=(num1+num2+num3)/3;
	
	if(MA>=9){
		printf("O conceito e A:\n");
		printf("As notas sao %.2f, %.2f, %.2f\n", num1, num2,num3);
		printf("Media de aproveitamento %.2f\n", MA);
		printf("Aprovado\n");
	}
	else if(MA>=7.5 && MA<9){
		printf("O conceito e B:\n");
		printf("As notas sao %.2f, %.2f, %.2f\n", num1, num2,num3);
		printf("Media de aproveitamento %.2f\n", MA);
		printf("Aprovado\n");
	}
	else if(MA>=6 && MA<7.5){
		printf("O conceito e C:\n");
		printf("As notas sao %.2f, %.2f, %.2f\n", num1, num2,num3);
		printf("Media de aproveitamento %.2f\n", MA);
		printf("Aprovado\n");
	}
	else if(MA>=4 && MA<6){
		printf("O conceito e D:\n");
		printf("As notas sao %.2f, %.2f, %.2f\n", num1, num2,num3);
		printf("Media de aproveitamento %.2f\n", MA);
		printf("Reprovado\n");
	}
	else{
		printf("O conceito e0 E:\n");
		printf("As notas sao %.2f, %.2f, %.2f\n", num1, num2,num3);
		printf("Media de aproveitamento %.2f\n", MA);
		printf("Reprovado\n");
	}
}
