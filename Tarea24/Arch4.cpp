#include<stdio.h>

struct registro{
	int cuenta;
	char nombre[30];
	int balance;
};

int main(){
	
	FILE *cfPtr;
	struct registro CuentaR;
	
	if ((cfPtr = fopen("cuentas.dat","r"))==NULL){
		printf("No se abrio el archivo");
		
	}else{
		printf("%-6s%-16s%10s","No. de Cuenta:","Nombre:","Balance");
		
		while(!feof(cfPtr)){
			fread(&CuentaR,sizeof(struct registro),1,cfPtr);
			
			if(CuentaR.cuenta != 0){
				printf("%-6s%-16s%10s",CuentaR.cuenta,CuentaR.nombre,CuentaR.balance);
			}
		}
	}
	fclose(cfPtr);
	return 0;
}
