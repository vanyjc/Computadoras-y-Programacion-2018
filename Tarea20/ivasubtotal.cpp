#include<stdio.h>
#include"iva.h"

int main(){
	
	float cant;
	
	printf("Inserte la cantidad: ");
	scanf("%f",&cant);
	
	printf("\nEl iva es: %.2f",fniva(cant));
	printf("\nEl subtotal es: %.2f",fnsubt(cant));
	printf("\nEl total es: %.2f",cant);
}
