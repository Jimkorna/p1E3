#include <stdio.h>

int main(){
	
	int N;
	printf("Insert N: "); scanf("%d" , &N);
	int stars = N; 
	int kena = N;
	
	for(int i = 0; i<stars; i++){
	if(i == 0 || i == N-1)
		for(int j=0; j<kena; j++) printf("*");
	else
	{
		printf("*");
		for(int h=0; h<N-2; h++)
		printf(" ");
		printf("*");
		}	
		
	
		
		printf("\n");
	} 
	
	
	return 0;
}
//Sto parakatw programma o xrhsths eisagh mia timh N pou kathorizei tis pleures tou tetragonou//
