#include <stdio.h>

int main(){
	float nota1, nota2, nota3, media;
	
	printf("Digite a nota 1:");
	scanf("%f%*c", &nota1);
	printf("Digite a nota 2:");
	scanf("%f%*c", &nota2);
	printf("Digite a nota 3:");
	scanf("%f%*c", &nota3);
	
	media=(nota1+nota2+nota3)/3;
	if (media <4){
		printf ("Reprovado");
	} else if(media>=4&&(media<7)){
		printf("Exame");
	}else{
		printf("Aprovado");
	}
}

