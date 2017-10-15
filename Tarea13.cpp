#include<stdio.h>
#include<stdlib.h>

int main(){
	
	
	int opcion;
	float num1,num2,suma,resta,multiplicacion,division;
	
	do{
	system("color fc");
		
	printf("\nMENU \n Que desea realizar? \n");
	printf("1. SUMA \n");
	printf("2. RESTA \n");
	printf("3. SALIR \n");
	
	scanf("%i",&opcion);
	
	switch(opcion){
case 1:
		printf("Elegiste SUMA\n");
		printf("Escriba el 1er numero: ");
		scanf("%f",&num1);
		printf("\nEscriba el 2do numero: ");
		scanf("%f",&num2);
		printf("\nLa suma de %.2f y %.2f es %.2f \n",num1,num2,suma=num1+num2);
	break;	
	
	
case 2:
		printf("Elegiste RESTA\n");
		printf("Escriba el 1er numero: ");
		scanf("%f",&num1);
		printf("\nEscriba el 2do numero: ");
		scanf("%f",&num2);
		printf("\nLa resta de %.2f y %.2f es %.2f \n",num1,num2,resta=num1-num2);
		
	break;
		
	}
	
	}	while (opcion!=3);
	
	
}
