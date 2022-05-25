#include <stdio.h>

int main(){
	float nota1, nota2;
	
	printf("Digite a nota 1:");
	scanf("%f%*c", &nota1);
	printf("Digite a nota 2:");
	scanf("%f%*c", &nota2);
	
	if(nota1<nota2)
	{
		printf("O menor numero e %.2f\n", nota1);
	} else if (nota2<nota1){
		printf("o menor numero e %.2f\n", nota2);
	} else{
		printf("Os numeros sao iguais\n");
	}
}
