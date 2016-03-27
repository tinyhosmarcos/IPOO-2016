#include <stdio.h>

int main() {
	int ingresar,suma,contador;
	suma=0;
	contador=0;
	printf("Ingrese el limite\n");
	scanf("%d",&ingresar);
	for(int i=1;i<ingresar;i++){
		for(int j=1;j<=i;j++){
			if(i%j==0 and i!=1){
				contador++;
			}
		}
		if (contador==2)
			suma+=i;
		contador=0;
	}
	printf("La suma de los numeros primos anteriores a %d 	son 	%d:",ingresar,suma);
	
	return 0;
}

