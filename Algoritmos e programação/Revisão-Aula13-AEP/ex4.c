//Ler dois valores inteiros e escrever o resultado da 
//divis�o do primeiro pelo segundo. Se o segundo valor
// informado for ZERO, deve ser impressa uma mensagem 
//de VALOR INV�LIDO e ser lido um novo valor. Ao final 
//do programa deve ser impressa a seguinte mensagem: 
//VOCE DESEJA OUTRO C�LCULO (S/N).  Se a resposta for S 
//o programa dever� retornar ao come�o, caso contr�rio 
//dever� encerrar a sua execu��o imprimindo quantos 
//c�lculos foram feitos. 

#include <stdio.h> 
int main(){ 

	float numero1,numero2;
	float div;
	char opcao;


	do{
    printf("Digite o primeiro valor:\n");
    scanf("%f%*c",&numero1);
    
    do{
        printf("Digite o segundo valor:\n");
        scanf("%f%*c",&numero2);
        
        if(numero2==0){
            printf("Valor invalido\n");
        }
        } while (numero2==0);
        
    div=numero1/numero2;
    printf("A divis�o de %.2f // %.2f e %.2f \n",numero1,numero2,div);
    printf("Quer efetuar novo calculo? [s/n]\n");
    scanf("%s%*c",&opcao);
    


} while ((opcao=='s')||(opcao=='S'));


}

