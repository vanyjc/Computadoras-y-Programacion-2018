#include<stdio.h>

int main(){
	
	int j=0;
	int inf=3;
	int sup=6;
	
	for(inf=3;inf<=sup;inf=inf+1){
	
	for (j=1;j<=10;j=j+1){
		
		printf("%d x %d = %d \n",inf,j,inf*j);
	}
		printf("--------------\n");	
	}
	
	printf("Fin del programa");
	
	
}
