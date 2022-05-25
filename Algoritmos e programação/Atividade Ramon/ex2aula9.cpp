#include <stdio.h>

int main(){
	int idade;
	
	printf("Digite sua idade\n");
	scanf("%i%*c", &idade);
	
	if(idade>=18){
		printf("Voce e maior de idade", idade);
	}
	
	else{
		printf("Você e menor de idade");
	}
}
