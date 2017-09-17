#include<stdio.h>

int main(){
	
	int j=0;
	int inf;
	int sup;

	printf("Programa que imprime tablas de multiplicar del numero n al numero m \n");
	printf("Inserte un primer numero entero:  \n");
	scanf("%d",&inf);
	
	printf("Inserte un segundo numero entero: \n");
	scanf("%d",&sup);
		
		
	if(inf>=sup){
		printf("El primer numero debe ser menor que el segundo\n");
	}
	
	else{
		for(inf;inf<=sup;inf=inf+1){
	
		for (j=1;j<=10;j=j+1){
		
			printf("%d x %d = %d \n",inf,j,inf*j);
	}
		printf("--------------\n");	
	}
	}
	
	printf("\n Fin del programa");
	
}
