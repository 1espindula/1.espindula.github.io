#include <stdio.h>

int main(){
	int nota1, nota2, nota3, media;
	
	printf("Qual � a primeira nota?");
	scanf("%d%*c", &nota1);
	printf("Qual � a segunda nota?");
	scanf("%d%*c", &nota2);
	printf("Qual � a terceira nota?");
	scanf("%d%*c", &nota3);
	
	media=(nota1+nota2+nota3)/3;
	
	printf("A m�dia �?: %d", media);
	
}
