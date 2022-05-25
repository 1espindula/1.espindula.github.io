#include <stdio.h>

int main(){
	float num1, num2, num3;
	
	printf("Digite o primeiro numero\n");
	scanf("%f%*c", &num1);
	printf("Digite o segundo numero\n");
	scanf("%f%*c", &num2);
	printf("Digite o tercerio numero\n");
	scanf("%f%*c", &num3);
	
	if(num1>num2 && num1>num3){
		printf("O maior numero e %.2f", num1);
	}
	
	else if(num2>num1 && num2>num3){
		printf("O maior numero e %.2f", num2);
	}
	
	else{
		printf("O maior numero e %.2f", num3);
	}
}
