#include <stdio.h>
#include <math.h>
int main(){
	float num1, num2, opc, med, dif1, dif2, prod, div1, div2;
	printf("Digite o primeiro numero:");
	scanf("%f%*c", &num1);
	printf("Digite o segundo numero:");
	scanf("%f%*c", &num2);
	printf("==========OPCOES==========\n");
	printf("Selecione uma opcao:\n");
	printf("1- Media entre os numero que foram digitados:\n");
	printf("2- Qual e a diferença do maior pelo menor:\n");
	printf("3- O produto entre os numeros digitados:\n");
	printf("4- A divisao do primeiro numero pelo segundo numero:\n");
	scanf("%f%*c", &opc);
	med=(num1+num2)/2;
	dif1= num1-num2;
	dif2= num2-num1;
	prod= num1*num2;
	div1=num1/num2;
	div2=num2/num1;
	if(opc==1){
		printf("A media entre os numeros digitados e: %.2f\n", med);
		}
		else if(opc==2 && num1>num2){
			printf("A diferença entre os numeros e: %.2f\n", dif1);
		}
		else if(opc==2 && num2>num1){
			printf("A diferenca entre os numeros e: %.2f\n", dif2);
		}
		else if(opc==2 && num1==num1 && num2==num2){
        printf("A media entre os numeros digitados e:%.2f\n", dif2);
        }
		else if(opc==3){
			printf("O produto entre os numeros: %.2f\n", prod);
		}
		else if(opc==4 && num1>num2){
			printf("O resultado da divisao e: %.2f\n", div1);
		}
		else if(opc==4 && num2>num1)
			printf("O resultado da divisao e: %.2f\n", div2);
		
	return 0;
}
