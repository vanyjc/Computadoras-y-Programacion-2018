#include<stdio.h>
#include<stdlib.h>

int main(){
	
	float cantidad;
	char res;
		
	do{
	
	system("color 5f");
	system("cls");
	printf("Inserte la cantidad: ");
	scanf("%f",&cantidad);
	
	printf("\nEl iva es: %.2f",cantidad*0.16);
	printf("\nEl subtotal es: %.2f",cantidad-(cantidad*0.16));
	printf("\nEl total es: %.2f",cantidad);
	
	printf("\n Desea hacerlo de nuevo? s/n: ");
	scanf("%c",&res);
	res=getchar();
	
	}while (res!='n');
	
	
}
