#include <stdio.h>
#include <math.h>

int main(){
	float notatrab, avalsem, exame, media;
	
	printf("Digite a nota do trabalho de laboratorio:\n");
	scanf("%f%*c", &notatrab);
	printf("Digite a nota da avaliacao semestral:\n");
	scanf("%f%*c", &avalsem);
	printf("Digite a nota do exame final:\n");
	scanf("%f%*c", &exame);
	
	media=(notatrab*2+avalsem*3+exame*4)/10;
	
	printf("Sua media e %.2f:\n", media);
	
	if(media>=8 && media<=10){
		printf("Voce passou com media A, parabens!\n");
	}
	else if(media>=7 && media<8){
		printf("Voce passou com media B, muito bem! \n");
	}
	else if(media>=6 && media<7){
		printf("Voce passou com media C!\n");
	}
	else if(media>=5 && media<6){
		printf("Voce reprovou com media D, mas chegou perto!\n");
	}
	else if(media>=0 && media<5){
		printf("Voce reprovou com media E, estude mais da proxima vez\n");
	}
}
