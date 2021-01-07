#include<stdio.h>
#include<stdlib.h>

int main(){
	
	float F;
	float C;
	float Resultado;
	
	
     printf("\nEntre com a temperatura em Farenheit");
	 scanf("%f",&F);
	 
	 Resultado=(F-32);
	 
	 C=Resultado*5;
	 C=C/9;
	       
	 printf("A temperado em Celsius %.4f",C);
	
		
}
