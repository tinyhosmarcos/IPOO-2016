#include <stdio.h>
using namespace std;

int main() {
	int ingresar,cuadrado;
	scanf("%d",&ingresar);
	while(ingresar!=0){
		cuadrado=ingresar*ingresar;
		printf("El cuadrado del numero %d es:	%d\n",ingresar, cuadrado);
		scanf("%d",&ingresar);
	}
	
}

