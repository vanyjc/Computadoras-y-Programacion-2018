#include<stdio.h>

int main(){
	
	int j=0;
	int k=0;
	
	for(j=1;j<=6;j=j+1){			
		for(k=1;k<=6;k=k+1){
						
			if ((k>1 && j!=1) && (k<6 && j!=6))	{
			printf(" ");
			}else{
				printf("+");
			}
		}
		printf("\n");
	}
	printf("FIN DEL PROGRAMA");
	
}
