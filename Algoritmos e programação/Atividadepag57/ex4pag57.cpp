#include <stdio.h>

int main(){
	int num1, num2, num3;
	
	printf("Digite o primerio numero:\n");
	scanf("%i%*c", &num1);
	printf("Digite o segundo numero:\n");
	scanf("%i%*c", &num2);
	printf("Digite o terceiro numero:\n");
	scanf("%i%*c", &num3);
	
	
	if(num1<num2 && num1<num3){
		printf("A onder crescente e: %.2i, %.2i, %.2i\,n", num1, num2, num3);
	}
	else if(num1 <= num3 && num3 <= num2){
		printf ("A ordem crescente é: %.2i, %.2i, %.2i\,n", num1, num3, num2);
	}
	else if(num2 <= num1 && num1 <= num3){
		printf ("A ordem crescente é; %.2i, %.2i, %.2i\,n", num2,num1,num3);
	}
	else if(num2 <= num3 && num3 <= num1){
		printf ("A ordem crescente é; %.2i, %.2i, %.2i\,n", num2,num3,num1);
	}
	else if(num3 <= num1 && num1 <= num2){
		printf ("A ordem crescente é; %.2i, %.2i, %.2i\,n", num3,num1,num2);
	}
	else if(num3 <= num2 && num2 <= num1){
		printf ("A ordem crescente é; %.2i, %.2i, %.2i\,n", num3,num2,num1);
	}
	return 0;
	
}
