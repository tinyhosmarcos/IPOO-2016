#include <stdio.h>
int main() {
	int ingresar,suma;
	suma=0;
	printf("Ingrese el limite de suma:\n");
	scanf("%d",&ingresar);
	while(ingresar<=0){
		printf("Error, ingrese un numero mayor que 0\n");
		printf("Ingrese el limite de suma:\n");
		scanf("%d",&ingresar);
	}
	for(int i=1;i<=ingresar;i++)
		suma+=i;
	printf("La suma de los %d primeros numeros enteros es %d",ingresar,suma);
	return 0;
}

