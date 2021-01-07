#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main(){
	
	float salario;
	float horas, valhoras;
	
	printf("\nEntre com a quantidade de horas trabalhadas no mes:");
	scanf("%f",&horas);
	
	printf("\nEntre com o valor recebido por hora:");
	scanf("%f",&valhoras);
 	
	salario=(horas*valhoras);
	printf("\nSeu salario e de: %2.f",salario);
	
	if(salario<=900){
		printf("Isento do Imposto de renda");
		
	}else{
		  if(salario>900 && <=1500){
		  	salario=salario/100*5;
		  	printf(" Foi cobrado um desconto de 5 porcento, salario atual %f",salario);
		  	
		  }else{
		  		if(salario>1500 && <=2500){
		  			salario=salario/100*10;
		  			printf(" Foi cobrado um desconto de 10 porcento, salario atual %f",salario);
				  }else{
				  		(salario=salario/100*20);
				  		printf(" Foi cobrado um desconto de 20 porcento, salario atual %f",salario);
				  		}
				}
		}
}	
		

