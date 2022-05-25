#include <stdio.h>
#include<math.h>

int main(){
	
float salat, aumento, novosal;
  printf("Insira o valor de seu salario\n");
  scanf("%f%*c", &salat);
  
if (salat<=300.00){
  aumento= salat*0.15;
  novosal= aumento+salat;
  printf("Seu novo salario e de:%.2f\n", novosal);
  printf("O valor de aumento do seu salario foi de :%.2f\n", aumento);
}

else if(salat>300.00 && salat<=600.00){
  aumento= salat*0.10;
  novosal= aumento+salat;
  printf("Seu novo salario e de:%.2f\n", novosal);
  printf("O valor de aumento do seu salario foi de :%.2f\n", aumento);
}

else if(salat>600.00 && salat<=900.00){
  aumento= salat*0.05;
  novosal= aumento+salat;
  printf("Seu novo salario e de:%.2f\n", novosal);
  printf("O valor de aumento do seu salario foi de :%.2f\n", aumento);
}

else{
  printf("Voce nao tem direito a aumento");
}
}

