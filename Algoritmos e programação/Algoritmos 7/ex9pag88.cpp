#include <stdio.h>
#include <math.h>

int main(){
	float saldo, credito1, aumento1, credito2, aumento2, credito3, aumento3, credito4, aumento4 ;
	printf("Digite seu salario:\n");
	scanf("%f%*c", &saldo);
	
	aumento1=saldo*30/100;
	credito1=saldo+aumento1;
	
	aumento2=saldo*25/100;
	credito2=saldo+aumento2;
	
	aumento3=saldo*20/100;
	credito3=saldo+aumento3;
	
	aumento4=saldo*10/100;
	credito4=saldo+aumento4;
	
	if(saldo>400){
		printf("Seu saldo e %.2f e o seu credito e %.2f\n", saldo, credito1);
	}
	else if(saldo<=400 && saldo>300){
		printf("Seu saldo e %.2f e o seu credito e %.2f\n", saldo, credito2);
	}
	
	else if(saldo<=300 && saldo>200){
		printf("Seu saldo e %.2f e o seu credito e %.2f\n", saldo, credito3);
	}
	else{
		printf("Seu saldo e %.2f e o seu credito e %.2f\n", saldo, credito4);
	}
	return 0;
}
