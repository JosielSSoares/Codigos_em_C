#include<stdlib.h>
#include<stdio.h>
#include<math.h> 

// Dado N calcule R: 1/1+ 2/n-1+ 3/n-2 +.....

int main (){
	float n,i,r;
	printf("\nEntre com o N:");
	scanf("%f",&n);
	
	r=0;
	
	for(i=1.0; i<=n; i=i+1.0)
		r=r+(i/(n-(i-1)));
		printf("%f", r);
		
}

