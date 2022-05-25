#include <stdio.h>
#include <math.h>

int main(){
	int num1, num2, num3, num4;
	printf("Digite  tres numeros em ordem crescente\n ");
	scanf("%i%*c", &num1);
	scanf("%i%*c", &num2);
	scanf("%i%*c", &num3);
	printf("Digite um numero fora de ordem:\n");
	scanf("%i%*c", &num4);
	
	if(num4>num3){
		printf("A ordem decrescente e: %.2i, %.2i, %.2i, %.2i", num4, num3, num2, num1);
	}
	else if(num4>num2 && num4<num3){
		printf("A ordem decrescente e: %.2i, %.2i, %.2i, %.2i", num3, num4, num2, num1);
	}
	else if(num4>num1 && num4<num2){
		printf("A ordem decrescente e: %.2i, %.2i, %.2i, %.2i", num3, num2, num4, num1);
	}
	else if(num4<num1){
		printf("A ordem decrescente e: %.2i, %.2i, %.2i, %.2i", num3, num2, num1, num4);
	}
}
	

	
	
	
