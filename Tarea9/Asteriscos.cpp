#include<stdio.h>
#include<stdlib.h>

int main(){
	
	int ast;
	int inicio;
	char res;
	
	do{
	system("color f5");
	system("cls");
	printf("Inserte la cantidad de asteriscos que desee ver en pantalla: ");
	scanf("%d",&ast);
	
	for(inicio=1;inicio<=ast;inicio++){
		printf("*");
	}
	
	printf("\nDesea intentarlo de nuevo? s/n:  ");
	scanf("%c",&res);
	res=getchar();
	}while (res!='n');
	
	
}
