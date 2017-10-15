#include<stdio.h>
#include<stdlib.h>

int main(){
	
	int num1;
	float num2,num3;
	
	system("color f5");
	printf("Usuario, inserte un numero entero: ");
	scanf("%d",&num1);
	
	printf("\nInserte un numero con decimales: ");
	scanf("%f",&num2);
	
	printf("\nInserte otro numero con decimales: ");
	scanf("%f",&num3);	
	
	printf("\nEl 1er numero fue: %d",num1);
	printf("\nEl 2do numero fue: %f",num2);
	printf("\nEl 3er numero fue: %f",num3);
	
	
	if(num1<num2 && num1<num3){
			printf("\nEl primer numero es el menor");
		}else{if(num2<num1 && num2<num3){
			printf("\nEl segundo numero es el menor");
		}else{if(num3<num1 && num3<num2){
			printf("\nEl tercer numero es el menor");
		}else{if((num1!=num2) && (num2!=num3) && (num1!=num3)){	
		printf("\nLos tres numeros son iguales");		
	}
	}}}
	
	if(num1>num2 && num1>num3){
			printf("\nEl primer numero es el mayor");
		}else{if(num2>num1 && num2>num3){
			printf("\nEl segundo numero es el mayor");
		}else{if(num3>num1 && num3>num2){
			printf("\nEl tercer numero es el mayor");
		}}}	
	
}
