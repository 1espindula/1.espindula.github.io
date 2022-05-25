 #include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	float num1, num2, soma, raiz, op;
	
	printf("Menu\n");
	printf("1- Somar dois numeros\n");
	printf("2- Raiz quadrada de um numero\n");
	printf("Digite sua opcao:\n");
	scanf("%f%*c", &op);
	
	if(op==1){
		printf("Digite um valor para o primeiro numero:\n");
		scanf("%f%*c", &num1);
		printf("Digite um valor para o primeiro numero:\n");
		scanf("%f%*c", &num2);
		
		soma=num1+num2;
		
		printf("A soma de %.2f e %.2f e igual a %.2f\n", num1, num2, soma);
	}
	
	else if(op==2){
		printf("Digite um valor");
		scanf("%f%*c", &num1);
		raiz=sqrt(num1);
		printf("A raiz quadrada de %.2f e: %.2f\n", num1, raiz);
	
	}
	
	
	
}
