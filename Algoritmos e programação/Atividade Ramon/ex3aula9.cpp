#include <stdio.h>

int main(){
	float num1, num2;
	
	printf("Digite o primeiro numero\n");
	scanf("%f%*c", &num1);
	printf("Digite o segundo o numero\n");
	scanf("%f%*c", &num2);
	
	if(num1>num2){
		printf("A diferença de %.2f e %.2f e: %.2f", num1, num2, num1-num2);
	}
	
	else{
		printf("A diferença de %.2f e %.2f e: %.2f", num2, num1, num2-num1);
	}
	return 0;
	}
	
