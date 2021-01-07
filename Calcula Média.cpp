#include<stdio.h>
#include<stdlib.h>

int main(){
	
	float P1;
	float P2;
	float T;
	float Media;
	
	printf("\nEntre com a nota da P1");
	scanf("%f",&P1);
	
	printf("\nEntre com a nota da P2");
	scanf("%f",&P2);
	
	printf("\nEntre com a nota do trabalho");
	scanf("%f",&T);
	
	Media=(P1*3)+(P2*5)+(T*2);
	Media=Media/10;
	
		if(Media>=7){
			printf("\nO Aluno foi aprovado");
					}
			else{
				printf("\nO aluno foi reprovado");
				}			
			
		printf("\nA media do aluno foi %.2f",Media);
}
	
