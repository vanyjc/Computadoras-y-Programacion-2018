#include <stdio.h>

using namespace std;


int main(int argc, char *argv[]) {
int dato;

FILE *ptrArchivo;
ptrArchivo=fopen("datos.dat","wb");

if(ptrArchivo==NULL){
	printf("Error al abrir el archivo\n");
}else{
	
	printf("Dame el dato a guardar al archivo:");
	scanf("%d",dato);
	
	//se guarda el archivo
	
	fprintf(ptrArchivo,"%d\n",dato);
	fprintf(ptrArchivo,"%d\n",++dato);
	fprintf(ptrArchivo,"%d\n",++dato);
	
	fclose(ptrArchivo);//se cierra archivo
}


	return 0;
}
