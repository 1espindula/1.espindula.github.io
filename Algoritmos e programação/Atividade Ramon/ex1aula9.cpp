#include <stdio.h>

int main(){
	float num1, num2;
	printf("Selecione o primeiro numero: \n");
	scanf("%f%*c", &num1);
	printf("Selecione o segundo numero: \n");
	scanf("%f%*c", &num2);
	
	if(num1>num2){
		printf("Numero %.2f + 100 e igual a %.2f", num1, num1+100);
	}
	
	else{
		printf("Numero %.2f + 100 e igual a %.2f", num2, num2+100);
	}
	
	
	
	return 0;
}
