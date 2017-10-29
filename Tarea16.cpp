#include<stdio.h>

int main(){
	
	int var1=5;
	int var2=2;
	int resultado=0;
	
	resultado=var1==var2;
	printf("%d == %d=%d\n",var1,var2,resultado);
	
	resultado=var1<=var2;
	printf("%d <= %d=%d\n",var1,var2,resultado);
	
	resultado=var1>var2;
	printf("%d > %d=%d\n",var1,var2,resultado);
	
	resultado=var1!=var2;
	printf("%d != %d=%d\n",var1,var2,resultado);
	
	return 0;
}
