//Fa�a um programa para repetir a leitura de um n�mero enquanto 
//o valor fornecido for diferente de 0. Para cada n�mero fornecido, 
//escrever se ele � NEGATIVO ou POSITIVO. Quando o n�mero 0 for fornecido 
//a repeti��o deve ser encerrada sem escrever mensagem alguma.

#include <stdio.h>

int main(){
    int numero;
    do
    {
    printf ("Digite um numero\n");
    scanf("%d%*c", &numero);

    if(numero>0){
        printf("NUMERO POSITIVO\n");
    }
    else if(numero==0){
        break;
    }
    else{
        printf("NUMERO NEGATIVO\n");
    }
    }while(numero!=0);
}

