#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#include<time.h> 

int main(){
	
	int a,b,resto;
	
	printf("\n Entre com  A:");
	scanf("%d", &a);
	
	printf("\n Entre com  B:");
	scanf("%d", &b);
	resto = -1;
	while(resto!=0){
		resto=a%b;
		a=b;
		b=resto;
		
		
	}
	printf("MDC %d", a);
}
