#include <stdio.h>

int main(){
	int idade;
	
	printf("Digite sua idade\n");
	scanf("%i%*c", &idade);
	
	if(idade>=18){
		printf("Voce ja pode frequentar o Clube dos Coroas no Entrevero\n");
	}
	else if(idade<18){
		printf("Voce e menor de idade, falta %.2i anos para voce ser maior\n", idade-18);
	}
	
} 
