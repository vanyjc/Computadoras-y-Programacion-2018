#include<stdio.h>
#include<stdlib.h>

int main(){
	
	int usuario;
	char res;
	
	do{
	system("color f2");
	system("cls");
	printf("Inserte un numero del 1 al 7 para saber que dia de la semana es: ");
	scanf("%d",&usuario);
	
	switch(usuario){
		case 1:
			printf("El primer dia de la semana es DOMINGO");
			break;
		case 2:
			printf("El segundo dia de la semana es LUNES");
			break;
		case 3:
			printf("El tercer dia de la semana es MARTES");
			break;
		case 4:
			printf("El cuarto dia de la semana es MIERCOLES");
			break;
		case 5:
			printf("El quinto dia de la semana es JUEVES");
			break;
		case 6:
			printf("El sexto dia de la semana es VIERNES");
			break;
		case 7:
			printf("El septimo dia de la semana es SABADO");		
			break;
		default:
			printf("Numero incompatible");		
	}
	
	printf("\nDesea intentarlo de nuevo? s/n:  ");
	scanf("%c",&res);
	res=getchar();
	
	}while (res!='n');
	
	
}
