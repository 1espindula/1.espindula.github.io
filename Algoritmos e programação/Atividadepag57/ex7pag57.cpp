#include <stdio.h>

int main(){
	float A, B, C;
	int I;
	
	printf("Digite um valor para A:\n");
	scanf("%f%*c", &A);
	printf("Digite um valor para B:\n");
	scanf("%f%*c", &B);
	printf("Digite um valor para C:\n");
	scanf("%f%*c", &C);
	printf("Digite o valor para I: (1, 2 ou 3)");
	scanf("%i%*c", &I);
	
	switch(I){
		case 1:
			if(A==B && A==C && B==C){
				printf("Todos os numeros são iguais");
			}
			else if(A<B && A<C){
				if(B<C){
					printf("A ordem crescente e: %.2f, %.2f, %.2f", A, B, C);
				}
				else{
					printf("A ordem crescente e: %.2f, %.2f, %.2f", A, C, B);
				}
			}
			else if(A>B && A>C){
				if(B>C){
					printf("A ordem crescente e: %.2f, %.2f, %.2f", C, B, A);
				}
				else{
					printf("A ordem crescente e: %.2f, %.2f, %.2f", B, C, A);
				}
			}
			else{
				if(B>C){
					printf("A ordem crescente e: %.2f, %.2f, %.2f", C, A, B);
				}
				else{
					printf("A ordem crescente e: %.2f, %.2f, %.2f", B, A, C);
				}
			}
			break;
			
		case 2:
			if(A==B && A==C && B==C){
				printf("Todos os numeros são iguais");
			}
			else if(A>B && A>C){
				if(B>C){
					printf("A ordem decrescente e: %.2f, %.2f, %.2f", A, B, C);
				}
				else{
					printf("A ordem decrescente e: %.2f, %.2f, %.2f", A, C, B);
				}
			}
			else if(A<B && A<C){
				if(B<C){
					printf("A ordem decrescente e: %.2f, %.2f, %.2f", C, B, A);
				}
				else{
					printf("A ordem decrescente e: %.2f, %.2f, %.2f", B, C, A);
				}
			}
			else{
				if(B<C){
					printf("A ordem decrescente e: %.2f, %.2f, %.2f", B, A, C);
				}
				else{
					printf("A ordem decrescente e: %.2f, %.2f, %.2f", C, A, B);
				}
			}
			break;
			
		case 3: 
			if(A>B && A>C){
				printf("Maior no meio: %.2f, %.2f, %.2f", B, A, C);
			}
			else if(C>A && C>B){
				printf("Maior no meio: %.2f, %.2f, %.2f", A, C, B);
			}
			else{
				printf("Maior no meio: %.2f, %.2f, %.2f", A, B, C);
			}
			break;
			
		default:
			printf("OIE");
			break;		
			
	}
}
