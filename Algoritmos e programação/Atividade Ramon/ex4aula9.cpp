#include <stdio.h>

int main(){
	float num1, num2;
	
	printf("Digite o primeiro numero:\n");
	scanf("%f%*c", &num1);
	printf("Digite o segundo numero:\n");
	scanf("%f%*c", &num2);
	
	if(num1==num2){
		printf("Os numeros sao iguais");
	}
	
	else if(num1>num2){
		printf("O numero %.2f e maior", num1);
	}
	
	else{
		printf("O numero %.2f e maior", num2);
	}
}
