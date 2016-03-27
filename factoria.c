#include <stdio.h>

int factorial(int numero){
	if(numero==0)
		return 1;
	else
		return numero*factorial(numero-1);
}

int main() {
	int ingresar=0;
	scanf("%d",&ingresar);
	
	int imprimir=(factorial(ingresar));
	
	printf("%d",imprimir);
	return 0;
}

