#include <stdio.h>
#include <math.h>

int main(){
	float nota1, nota2, nota3, media, notaexame;
	
	printf("Digite a primeira nota\n");
	scanf("%f%*c", &nota1);
	printf("Digite a segunda nota\n");
	scanf("%f%*c", &nota2);
	printf("Digite a terceira nota\n");
	scanf("%f%*c", &nota3);
	
	media=(nota1+nota2+nota3)/3;
	
	printf("Sua media e: %.2f\n", media);
	
	if(media>=0 && media<3){
		printf("Voce foi reprovado\n");
	}
	else if(media>=3 && media<7){
		printf("Voce ficou no exame\n");
		notaexame=12-media;
		printf("Voce deveria tiarar %.2f para ser aprovado\n", notaexame);
		
	}
	else if(media >=7 && media<10){
		printf("Parabens, voce foi aprovado\n");
	}
}
