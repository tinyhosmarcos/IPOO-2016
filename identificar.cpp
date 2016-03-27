#include <stdio.h>
int main(){
	
	int space=0,tab=0,blink=0;
	int ingresar=getchar();
	
	while(ingresar!=EOF){
		
		if (ingresar==10)
			blink++;
		if (ingresar==9)
			tab++;
		if (ingresar==32)
			space++;
		ingresar=getchar();
	}
	printf("El numero de espacios en blanco es: %d \n",space);
	printf("El numero de tabulaciones 		es: %d \n",tab);
	printf("El numero de saltos de linea    es: %d \n",blink);
	
	
	
}
