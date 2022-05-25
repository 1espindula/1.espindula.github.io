
//Faça um algoritmo que leia a nota de vários 
//alunos de uma turma. Ao final, deve ser escrita 
//a média geral da turma. A leitura das médias 
//somente encerra quando uma nota negativa for digitada.

#include <stdio.h>

int main(){

    int i;
    float nota;
    float media;
    float total=0;
    int cont=0;

    do
    {
        printf("Digite a nota do aluno %d\n", cont+1);
        scanf("%f%*c", &nota);
        if(nota>0){
            total=nota+total;
            cont++;
        }
        else{
            printf("tchau querido\n");
            break;
        }


    }while(nota>0);

    media=total/cont;
    printf("A media da turma e: %f\n", media);
    printf("Total de notas lidas\n", cont);

}

