#include<stdio.h>
#include<stdlib.h>

int main(){
	
	int numero;
	char res;
	
	do{
	system("color f1");
	system("cls");
	printf("Inserte un numero para saber si es par o impar: ");
	scanf("%d",&numero);
	
	if(numero%2==0){
		printf("El numero es par");
	}else{
		printf("El numero es impar");
	}
	
	printf("\nDesea intentarlo de nuevo? s/n:  ");
	scanf("%c",&res);
	res=getchar();
	
	}while (res!='n');

}
