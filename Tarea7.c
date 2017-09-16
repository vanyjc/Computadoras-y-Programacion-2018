#include<stdio.h>

int main(){
	
	int no1;
	int no2;
	int no3;
	
	printf("Programa que encuentra el numero menor de 3 numeros \n");
	printf("Inserte el primer numero \n");
	scanf("%d",&no1);
	
	printf("Inserte el segundo numero \n");
	scanf("%d",&no2);
	
	printf("Inserte el tercer numero \n");
	scanf("%d",&no3);
	
	if(no1>0 && no2>0 && no3>0 && (no1!=no2) && (no2!=no3) && (no1!=no3)){
	
		if(no1<no2 && no1<no3){
			printf("%d es el numero menor",no1);
		}
		
		if(no2<no1 && no2<no3){
			printf("%d es el numero menor",no2);
		}
		
		if(no3<no1 && no3<no2){
			printf("%d es el numero menor",no3);
		}
		
	}else{
		printf("Los 3 numeros deben ser diferentes entre si y mayores a 0");
	}
		
	
	
}
