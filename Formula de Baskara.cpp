#include<stdio.h>
#include<stdlib.h>
#include<math.h>


int main(){
	
	float A, B, C, X1, X2;
	float Delta;
	
	printf("\nEntre com o valor de A");
	scanf("%f",&A);
	
	printf("\nEntre com o valor de B");
	scanf("%f",&B);
	
	printf("\nEntre com o valor de C");
	scanf("%f",&C);
	
	Delta=B*B-4*A*C;
	if(Delta>0){
		X1=(-B+sqrt(Delta))/(2*A);
		X2=(-B-sqrt(Delta))/(2*A);
		
		printf("\nSao duas raizes de valor %f e %f", X1,X2);
	}
	else{
		if(Delta==0){
			X1=(-B+sqrt(Delta))/(2*A);
			printf("\nValor de primeira raiz %f", X1);
					}
			else{
				printf("\nNao possui um valor para Delta");
			   	}
		            }
}
	
