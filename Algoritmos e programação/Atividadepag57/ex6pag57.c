#include <stdio.h>
#include <math.h>

int main(){
	int num, r;
	
	printf("Digite um numero\n");
	scanf("%i%*c", &num);
	
	r=(num/2);
	
	if(num/2==0){
		
		printf("O numero e par\n");
	}
	else{
		printf("O numero e impar\n");
	}
	return 0;
}
