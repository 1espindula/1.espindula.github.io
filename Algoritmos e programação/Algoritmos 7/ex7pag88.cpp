#include <stdio.h>
#include <math.h>
int main(){
	float sal, novosalario, aumento;
	printf("Digite seu salario:\n");
	scanf("%f%*c", &sal);
	
	
	aumento=sal*30/100;
	novosalario=sal+aumento;
	
	if(sal<500){
		printf("Seu novo salario vai ser: %.2f\n", novosalario);
	}
	else{
		printf("Voce nao recebe aumento %.2f\n");
	}
	
	
	return 0;
}
