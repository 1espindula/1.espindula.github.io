#include <stdio.h>

int main (){
	int idade;
	
	printf("Digite sua idade:\n");
	scanf("%i%*c", &idade);
	
	if (idade>=18 && idade<70){
		printf("Voce e maior de idade e obrigado a votar");
	}
	
	else if (idade >= 16 && idade<18){
		printf("Voce e menor de idade e pode escolher se quer votar ou nao");
	}
	
	else if(idade>=70){
		printf("Voce e maior de idade e pode escolher se quer votar ou nao");
	}
	
	else{
		printf("Voce e menor de idade e nao pode votar");
	}
	
	
	
}
