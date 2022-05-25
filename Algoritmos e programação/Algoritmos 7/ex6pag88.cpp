#include <stdio.h>
#include <math.h>
int main(){
	int num1, num2, op, elev, rai1, rai2, cub1, cub2;
	printf("Digite o primeiro numero:");
	scanf("%d%*c", &num1);
	printf("Digite o segundo numero:");
	scanf("%d%*c", &num2);
	printf("==========OPCOES==========\n");
	printf("EscoLHA UMA OPCAO:\n");
	printf("1- O primeiro numero elevado a segundo:\n");
	printf("2- A raiz quadrada de cada numero:\n");
	printf("3- A raiz cubica de cada um dos numeros:\n");
	scanf("%d%*c", &op);
	elev=pow(num1,num2);
	rai1=sqrt(num1);
	rai2=sqrt(num2);
	cub1=pow(num1,3);
	cub2=pow(num2,3);
	if(op==1){
		printf("Resposta: %d%\n", elev);
	}
	else if(op==2){
		printf("Resposta: %d e %d%\n", rai1, rai2);
	}
	else if(op==3){
		printf("Resposta: %d e %d%\n", cub1, cub2);
	}
	
	return 0;
	
}
