#include <stdio.h>


int main() {
	int base,exponente,temp;
	printf("Ingrese la base:	\n");
	scanf("%d",&base);
	printf("Ingrese el exponente:	\n");
	scanf("%d",&exponente);
	temp=base;
	while(exponente!=0){
		base*=temp;
		exponente--;
	}
	printf("El producto es: 	%d",base);	

	return 0;
}

