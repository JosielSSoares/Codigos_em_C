#include<stdio.h>
#include<stdlib.h>


int main(){
	
	float fig;
	float dinheiro;
	int troco;
	float valorf;
	
	
       
	   printf("\nEntre com a quantidade de figuras");	
	   scanf("%f",&fig);
	   
	   printf("\nEntre com a quantidade do dinheiro");	
	   scanf("%f",&dinheiro);
	   
	   printf("\nEntre com a quantidade de troco");	
	   scanf("%d",&troco);
	   
	   	valorf=(dinheiro-troco)/fig;
	   	
	   	
	   	printf("%.2f",valorf);   	
	   	
   	
}

   
