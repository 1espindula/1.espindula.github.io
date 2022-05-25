#include <stdio.h>

int main(){
	int num1, num2;
	
	printf("Digite o primeiro numero\n");
	scanf("%i%*c", &num1);
	printf("Digite o segundo numero\n");
	scanf("%i%*c", &num2);
	
	if(num1%2==0){
		printf("O numero %i e multiplo de 2\n", num1);
	}
	
	else{
		printf("O numero %i nao e multiplo de 2\n", num1);
	}
	
	if(num2%2==0){
		printf("O numero %i e multiplo de 2\n", num2);
	}
	
	else{
		printf("O numero %i nao e multiplo de 2\n", num2);
	}
}
