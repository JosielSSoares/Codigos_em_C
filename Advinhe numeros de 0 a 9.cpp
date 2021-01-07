#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#include<time.h> 
// adivinhe o número entre 0 e 9.
int main(){
	int x,y;
	printf("\n Advinhe um numero entre 0 e 9 ou digite -1 para sair:");
	scanf("%d",&x);
	
	srand(time(NULL));
	y=rand()%10;
	
	while(x!= -1){
		if(x==y){
		printf("\n Parabens voce acertou");
		x=-1;	
			
		}
		else{
			printf("\n Errou! Tente denovo");
			scanf("%d",&x);
		}
	}
	
}
