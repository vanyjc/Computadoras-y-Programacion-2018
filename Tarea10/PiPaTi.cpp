#include<stdio.h>
#include<stdlib.h>

int main(){
   
    int j1,j2;
    char res;
    
    do{
	system("color f9");
	system("cls");
    printf("JUEGO DE PIEDRA, PAPEL O TIJERA!\n");
    printf("1. PIEDRA\n2. PAPEL\n3. TIJERA");
    printf("\nJugador 1, inserte su jugada: \n"); 
    scanf("%d",&j1);
    printf("\nJugador 2, inserte su jugada: \n");
    scanf("%d",&j2);
     
	if ((j1>3||j1==0)||(j2>3||j2==0)){
    	
    	printf("Jugada invalida!!");
	}   
       
    if ((j1==1 && j2==1)||(j1==2 && j2==2)||(j1==3 && j2==3)){
        
        printf("EMPATE!!!");
    }
    
    if ((j1==1 && j2==2)||(j1==2 && j2==3)||(j1==3 && j2==1)){
        
        printf("GANA EL JUGADOR 2!!!");
    }
    
    if ((j1==1 && j2==3)||(j1==2 && j2==1)||(j1==3 && j2==2)){
        
        printf("GANA EL JUGADOR 1!!!");
    }
    
    
    printf("\n Desea hacerlo de nuevo? s/n: ");
	scanf("%c",&res);
	res=getchar();
     }  while (res!='n');
}
