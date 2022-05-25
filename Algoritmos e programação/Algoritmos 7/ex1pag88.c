#include <stdio.h>

int main(){
	float nota1, nota2, nota3, nota4, qntNotas = 4, media;
	printf ("Digite a primeira nota:");
	scanf ("%f%*c", &nota1);
	printf ("Digite a segunda nota:");
	scanf ("%f%*c", &nota2);
	printf ("Digite a terceira nota:");
	scanf ("%f%*c", &nota3);
	printf ("Digite a quarta nota:");
	scanf ("%f%*c", &nota4);
	
	
	media= (nota1+nota2+nota3+nota4) / qntNotas;
    printf("A sua nota media e:%.2f\n", media);
    if(media>=7){
        printf("Voce foi aprovado");
    }
    else{
        printf("Voce foi reprovado");
    }
    return 0;
}

