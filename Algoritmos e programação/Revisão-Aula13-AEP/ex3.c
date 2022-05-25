//Faça um programa para ler uma quantidade indeterminada 
//de valores inteiros. Para cada valor fornecido escrever 
//uma mensagem que indica se cada valor fornecido é PAR 
//ou ÍMPAR. O programa será encerrado imediatamente após
//a leitura de um valor NULO (zero) ou NEGATIVO.

#include <stdio.h> 

int main(){ 

    int n;
	do
	{
		
    printf("Digite o valor a ser testado\n");
    scanf("%d%*c",&n);
    if(n<=0){
        break;
        
    }else{
        if(n%2==0){
            printf("O numero e par\n");
        }
        
		else{
            printf("O numero e impar\n");
        }
    }
    
} 
while (n>0);

   
}


