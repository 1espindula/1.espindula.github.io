#include <stdio.h>
#include <math.h>

int main(){
	float custo, distribuidor, impostos, precofinal;
	printf("Digite o valor de fabrica:\n");
	scanf("%f%*c", &custo);
	
	if(custo<= 12000){
		distribuidor= custo + impostos;
		impostos= 0;
		precofinal= custo+ distribuidor+impostos;
		
		printf("O juros do consumidor e: %.2f", precofinal);
	}
	else if(custo > 12000 && custo <= 25000){
		distribuidor = custo * 10/100;
		impostos= custo * 15/100;
		precofinal= custo + distribuidor + impostos;
		printf("O juros ao consumir e: %.2f", precofinal);
	}
	else{
		distribuidor = custo * 15/100;
		impostos = custo *20/100;
		precofinal= custo * distribuidor + impostos;
		printf("O juros ao consumidor e: %.2f", precofinal);
	}
	
	return 0;
}
