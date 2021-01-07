#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
	
	float A, B, C;
	
	printf("\nEntre com a reta A");
	scanf("%d",&A);
	
	printf("\nEntre com a reta B");
	scanf("%d",&B);
	
	printf("\nEntre com o valor da reta C");
	scanf("%d", &C);
	
	if((A<B+C)&&(B<A+C)&&(C<A+B)&&(A>0)&&(B>0)&&(C>0)){
		printf("\nE possivel formar um triangulo");
		
	}else{
		printf("\nNao e possivel formar um triangulo");
	     }
	     
	if(A==B & B!=C & A>0 || A==C & C!=B & B>0 || B==C & C!=A & C>0){
				printf("\nO triangulo e da classe Isoceles");		    
			}else
			    {
				if(A==B & C==A & B==C & A+B>0){
							printf("\nO triangulo e da classe Equilatero");	
				           }
				           else{
				           	    if(A!=B!=C & A>0 & B>0 & C>0){
				           	      	        printf("\nO triangulo e da classe Escaleno");
				           	      	        
								           }else{
								           	printf("\nNao determinado");
										   }
						       }
			   }     
	     
}
