#include <stdio.h>

int main(){
	float nota1, nota2, nota3;
	
	printf("Digite a nota 1:");
	scanf("%f%*c", &nota1);
	printf("Digite a nota 2:");
	scanf("%f%*c", &nota2);
	printf("Digite a nota 3:");
	scanf("%f%*c", &nota3);
	
	if(nota1>nota2 && nota1>nota3){
		printf("O maior numero e %.2f\n", nota1);
	} 
	else if (nota2>nota1 &&nota2>nota3){
		printf("o maior numero e %.2f\n", nota2);
	} 
	else if (nota3>nota1 &&nota3>nota1){
		printf("o maior numero e %.2f\n", nota3);
	} 
	else{
		printf("Os numeros sao iguais.\n");
	} 
	
	return 0; 
}
