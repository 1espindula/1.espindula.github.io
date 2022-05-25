#include <stdio.h>
#include <windows.h>
UINT CPAGE_UTF8 = 65001;
  SetConsoleOutputCP(CPAGE_UTF8);

int main(){
	int numero, soma, media;
	
	soma=0;
	int i;
	for (i=0; i<10; i++)	{
	printf("Digite um numero\n");
	scanf("%d%*c", &numero);
	 
	soma=soma+numero;
		
	}
	
	media=soma/10;
	printf("A soma dos 10 numeros: %d", soma);
	printf("A media dos 10 numeros: %d", media);
}
