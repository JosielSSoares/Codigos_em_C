#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
	
	float A, B, C, X;
	int equilatero;
	int isosceles;
	int escaleno;
	
	printf("\nEntre com a reta A");
	scanf("%d",&A);
	
	printf("\nEntre com a reta B");
	scanf("%d",&B);
	
	printf("\nEntre com o valor da reta C");
	scanf("%d", &C);
	
	if(A+B>C){
			printf("\nE possivel formar um triangulo");		
		    }
			else{
				 if(A+C>B){
			printf("\nE possivel formar um triangulo");		
						 }
				
				else{
				 	if(B+C>A){
			printf("\nE possivel formar um triangulo");		
		                     }
				else{
					printf("\nNao e possivel formar um triangulo");
		                }
		           }
		    }
		    if(A==B & B!=C || A==C & C!=B || B==C & C!=A){
				printf("\nO triangulo e da classe Isoceles");		    
			}else
			    {
				if(A==B & C==A & B==C & A+B>0){
							printf("\nO triangulo e da classe Equilatero");	
				           }
				           else{
				           	    if(A!=B!=C){
				           	      	        printf("\nO triangulo e da classe Escaleno");
				           	      	        
								           }else{
								           	printf("\nNao determinado");
										   }
						       }
			   }
				           	      
}
